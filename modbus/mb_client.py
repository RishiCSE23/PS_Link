from pyModbusTCP.client import ModbusClient
from pyModbusTCP.utils import word_list_to_long, decode_ieee
import matplotlib.pyplot as plt
from drawnow import *
import time
from datetime import datetime

v_list =[]
t_list=[]
i_list=[]
window=60
host='192.168.127.241'
port=502
client = ModbusClient(host=host, port=port)
base = 7000
voltage = 2008
current = 4000
delay=1  # in sec


def plot_me():
    plt.suptitle(f'Connected to {host}:{port}')
    plt.title(f'samplig at {1/delay}/sec')
    plt.plot(t_list, v_list,'ro:', label=f'Voltage (v) at base={base}, offset={voltage}')
    plt.plot(t_list, i_list,'go:', label=f'Current (mA) at base={base}, offset={current}')
    plt.xlabel('timestamp')
    plt.ylabel('Magnitude')
    plt.xticks(rotation=90)
    plt.grid()
    plt.legend()


def two_bytes_to_float(bytes_list):
        if bytes_list:
            bytes_list = word_list_to_long(bytes_list)
            return round( decode_ieee(bytes_list[0]), 1 )

while True:
    print('Reading...')
    reg_v = two_bytes_to_float(client.read_input_registers(base+voltage, 2))
    reg_i = two_bytes_to_float(client.read_input_registers(base+current, 2))*1000  # A to mA
    print(f'v={reg_v}, i={reg_i}')
    if len(v_list) == window:
        v_list.pop(0)
        i_list.pop(0)
        t_list.pop(0)
    v_list.append(reg_v)
    i_list.append(reg_i)
    dt= datetime.now()
    t_list.append(f'{dt.hour}:{dt.minute}:{dt.second}')
    drawnow(plot_me)
    time.sleep(delay)

