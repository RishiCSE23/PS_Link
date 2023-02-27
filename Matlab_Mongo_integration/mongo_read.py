''''
This code reads data from a remote mongoDB server and plots graph 
'''
import pymongo 
import matplotlib.pyplot as plt

def main():
    db_vars ={
        'hostname':'192.168.200.129',
        'port':27017,
        'db':'ps_link',
        'collection':'test_collection_2'
    }

    conn_str = f"mongodb://{db_vars['hostname']}:{db_vars['port']}/"
    client = pymongo.MongoClient(conn_str, serverSelectionTimeoutMS=5000)
    db = client[db_vars['db']]
    collection=db[db_vars['collection']]
    query={}

    db_info = client.server_info()
    print('Connection successful...')

    print('fetching data...')
    result = [ item for item in  collection.find() ]
    
    ### Plotting
    nrow=1
    ncol=2

    fig, ax = plt.subplots(nrows=nrow, ncols=ncol)

    t_stamp = [i['t_stamp'] for i in result]
    phase_color_map={
        'phase_a':'r',
        'phase_b':'g',
        'phase_c':'b'
    }
    index=0
    for attr in ['current', 'voltage']:
        for phase in ['phase_a','phase_b', 'phase_c']:
            magnitude = [i[attr][phase] for i in result]
            color=phase_color_map[phase]
            ax[index].plot(t_stamp, magnitude, f'{color}o:', label=phase)
        ax[index].set_title(attr)
        ax[index].set_yscale('log')
        ax[index].legend()
        index+=1
                        
    plt.show()

if __name__ == '__main__':
    main()