import time
from contextlib import redirect_stdout
from io import StringIO

from pyModbusTCP.client import ModbusClient
from pyModbusTCP.utils import word_list_to_long, decode_ieee
from terminalplot import plot, get_terminal_size


class Pqube3(ModbusClient):

    def __init__(self, *args, **kwargs):
        super().__init__(auto_close=False, auto_open=True, timeout=0.1,
            *args, **kwargs)
        self.delay_time = 0#.01
        self.base_address = 7000

                
    def read_float(self, offset):
        time.sleep(self.delay_time)
        raw = self.read_input_registers(offset + self.base_address, 2)
        return self.two_bytes_to_float(raw)


    def two_bytes_to_float(self, bytes_list):
        if bytes_list:
            bytes_list = word_list_to_long(bytes_list)
            return round( decode_ieee(bytes_list[0]), 1 )


    def read_waveform(self, num_pts, offset):
        xs, ys = [], []
        end_addr = offset + num_pts * 2

        for x, addr in zip( range(num_pts), range(offset, end_addr, 2) ):
            y = self.read_float(addr)
            if y is not None:
                xs.append(x)
                ys.append(y)
        return xs, ys


    def get_waveform_chart(self, xs, ys, num_charts=2, title='', leave_space=0):
        y_size, x_size  = get_terminal_size()
        y_size = ( y_size // num_charts ) - leave_space
        fill_size = ( x_size - len(title) -2 ) // 2
        f = StringIO()
        with redirect_stdout(f):
            print(' '*fill_size, title, ' '*fill_size)
            plot(xs, ys, y_size, x_size)
            return f.getvalue()


    def clear_screen(self):
        print("\033c")


    
if __name__ == '__main__':
    host = '192.168.127.241'
    port = 502
    c = Pqube3(host, port)
    
    while True:
        voltage = c.read_float(2008)
        current = c.read_float(4000)
        voltage_wf = c.get_waveform_chart( *c.read_waveform(num_pts=32, offset=2034),
            title=f'Voltage: {voltage} V')
        current_wf = c.get_waveform_chart( *c.read_waveform(num_pts=32, offset=4028),
            title=f'Current: {current} A')
        c.clear_screen()
        print(voltage_wf, current_wf)


        time.sleep(0.5)
