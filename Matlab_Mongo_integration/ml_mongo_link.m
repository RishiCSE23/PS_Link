import database.mongo.*;


%% database params
host='192.168.200.129';       % IP of the MongoDB server
port=27017;                   % default port number 
db='ps_link';                 % name of the databse to populate 
collection='test_collection_2'; % name of the collection (device ID)

%% Connection Establishment 
conn = mongoc(host, port, db);  

if conn.isopen() == 1
    disp('Connection is active...');
else
    disp(strcat('Failed to connect',host,':',port,'/',db))
end

%% operate 
samples_size = length(out.Current);
%createCollection(conn, collection)

% segrigating variables
object_counter=0;
for i = 1:samples_size
    t_stamp = out.tout(i);

    i_a = out.Current(i,1);  %current from phase A
    i_b = out.Current(i,1);  %current from phase B
    i_c = out.Current(i,1);  %current from phase C

    v_a = out.Current(i,1);  %voltage from phase A
    v_b = out.Current(i,1);  %voltage from phase B
    v_c = out.Current(i,1);  %voltage from phase C

    % format string 
    fmt_str='{"t_stamp":%d, "current":{"phase_a": %f, "phase_b": %f, "phase_c": %f},"voltage":{"phase_a": %f, "phase_b": %f, "phase_c": %f}}';
    object = sprintf(fmt_str, t_stamp, i_a, i_b, i_c, v_a, v_b, v_c);
    object_counter=object_counter+1;
    
    %insert into MongoDB
    insert(conn,collection,object);

    disp(fprintf("%d / %d",object_counter, samples_size));
end
disp(object_counter, 'samples inserted...')
%% Connection Termination
conn.close()
disp('Connection closed')