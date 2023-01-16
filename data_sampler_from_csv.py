import pandas as pd
import os
from pprint import PrettyPrinter
import json
import time
import requests
import argparse, sys
import unicodedata
from termcolor import colored

def simulate_rt_telemetry(root_folder, server_param, lag=False):
     # Reading file names in root_folder in sorted order
    ordered_file_list = sorted(os.listdir(root_folder))
    progress_pct = 0
    pct = 5
    while len(ordered_file_list):  # until all files are read
        file_path = fr'{root_folder}\{ordered_file_list.pop(0)}'
        t_start = time.time()
        print(colored(f'Processing :', 'green') , colored(f'{file_path}....','yellow'))
        print(f'\t {colored("[1/2]", "green")} Converting csv to dict...')
        hour_df = pd.read_csv(file_path)
        hour_dict = hour_df.transpose().to_dict()
        print(f'\t {colored("[2/2]", "green")} rendering into JSON... ', end='')
        total_rows = len(hour_dict)  # number of rows
        row_count = 0
        for row in hour_dict:
            row_start_time = time.time()
            #progress bar
            progress = (row_count/total_rows)*100
            if progress % pct == 0:
                progress_pct = progress
                print(colored(u"\u2588", "cyan"),end=f'') # print # for each pct% progress (100/pct total)
            
            # preapring payload per row 
            payload = {
                'sample_info':{
                    'sample_interval_msec': hour_dict[row]['sample_interval_msec'],
                    'date': hour_dict[row]['yyyy_mm_dd'],
                    'time': hour_dict[row]['h_m_s_ms'],
                    'status': hour_dict[row]['status']
                },
                'phases':{
                    'phase_a':{
                        'volatge':{
                            'mag': hour_dict[row]['l1_voltage_mag'],
                            'angle': hour_dict[row]['l1_voltage_angle']
                        },
                        'current':{
                            'mag': hour_dict[row]['l1_current_mag'],
                            'angle': hour_dict[row]['l1_current_angle']
                        },
                    },
                    'phase_b':{
                        'volatge':{
                            'mag': hour_dict[row]['l2_voltage_mag'],
                            'angle': hour_dict[row]['l2_voltage_angle']
                        },
                        'current':{
                            'mag': hour_dict[row]['l2_current_mag'],
                            'angle': hour_dict[row]['l2_current_angle']
                        },
                    },
                    'phase_c':{
                        'volatge':{
                            'mag': hour_dict[row]['l3_voltage_mag'],
                            'angle': hour_dict[row]['l3_voltage_angle']
                        },
                        'current':{
                            'mag': hour_dict[row]['l1_current_mag'],
                            'angle': hour_dict[row]['l1_current_angle']
                        },
                    },
                    'center_frequency_offset':hour_dict[row]['center_frequency_offset']
                }
            }
            row_time_delta = time.time() - row_start_time
            response = requests.post(f'{server_param["proto"]}://{server_param["host"]}:{server_param["port"]}/post_json',
                        data=json.dumps(payload))
            # with open(json_file_name,'a') as fp:
            #     fp.write(json.dumps(payload))

            row_count+=1
            if lag:
                # dynamic sleep to simulate realtime sample generation 
                if row_time_delta < hour_dict[row]['sample_interval_msec']:
                    time.sleep(hour_dict[row]['sample_interval_msec']/100 - row_time_delta)

        print(f'{colored("[done]","green")} took {round(time.time() - t_start, 2)} sec.')

def main():
    root_folder = r'dataset\test_set'
    server_params = {
        'host':'10.33.135.108',
        'port':5000,
        'proto': 'http'
    }
    # arg_parser = argparse.ArgumentParser()

    # # defining args 
    # arg_parser.add_argument('--source_dir', help='Absolute path of the source Dataset directory' , type=str)
    # arg_parser.add_argument('--server', help='Hostname or IP of the collector', type=str )
    # arg_parser.add_argument('--port', help='Collector port number', type=int )
    # arg_parser.add_argument('--proto', help='Carrier protocol HTTP/HTTPS', type=str )
    
    # args = arg_parser.parse_args()

    # root_folder = fr'{args.source_dir}'
    # server_param = { 'host': args.server, 
    #                 'port': args.port, 
    #                 'proto':args.proto}
    simulate_rt_telemetry(root_folder=root_folder, server_param=server_params)

if __name__ == '__main__':
    main()