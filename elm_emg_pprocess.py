import numpy as np

os.chdir('/home/umaru/Documents/SFSF 2019/Arduino Related/operation_onepunch')
emg_health = np.loadtxt('data_sets/emg_healthy.txt')
emg = open('data_sets/csv/emg_healthy.csv','r')
emg_line = emg.readlines()
emg.close()

def extract_data(filename):
    
    labels=[]
    fvec=[]
    
    for line in file(filename):
        row = line.split(',')
        labels.append(int(row[0]))
        fvecs.append([float(x) for x in row[1:2]])
    fvecs_np = np.matrix(fvecs).astype(np.float32)
    
    labels_np = np.array(labels).astype(dtype=np.uint8)
    
    labels_onehot = (np.arange(NUM_LABELS) == labels_np[:, None]).astype(np.float32)
    
    return fvecs_np, labels_onehot
        
if __name__ == '__main__':
    extract_data(emg_line)