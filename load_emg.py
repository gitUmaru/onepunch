'''
author: @gitUmar
3/21/2019

'''
import matplotlib.pyplot as plt
import numpy as np
import os


#Global
os.chdir('/home/umaru/Documents/SFSF 2019/Arduino Related/operation_onepunch')
emg_health = np.loadtxt('data_sets/emg_healthy.txt')
emg_full = np.loadtxt('data_sets/grant_emg_full_profile.txt')
emg_test1 = np.loadtxt('data_sets/grant_emg_test1_3222019.txt')
#emg_health
xh = emg_health[:,0] #time
yh = abs(emg_health[:,1])#

#emg_full
xf = emg_full[:,0] #sEMG
yf = emg_full[:,1] #time

#emg_test1
x1 = emg_test1[:,0]#sEMG
y1 = emg_test1[:,1]#time

def health():
    plt.plot(xh,yh)
    plt.show()
def full():
    plt.plot(yf,xf)
    plt.show()
def test1():
    plt.plot(y1,x1)
    plt.show()

if __name__ == '__main__':
    health()
    full()
    test1()
