#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
@author: umaru
"""

import numpy as np
import os

os.chdir('/home/umaru/Downloads')
emg_health = np.loadtxt('emg_healthy.txt')
emg = 'emg_healthy - emg_healthy.csv'


def extract_data(filename):

    labels=[]
    fvecs=[]

    for line in open(filename):
        row = line.split(',')
        labels.append(int(row[0]))
        #fvecs.append([float(x) for x in row[1]])

    #fvecs_np = np.matrix(fvecs).astype(np.float32)
    fvecs_np = emg_health[:,0]
    labels_np = np.array(labels).astype(dtype=np.uint8)

    labels_onehot = (np.arange(5) == labels_np[:, None]).astype(np.float32)

    return fvecs_np, labels_onehot

if __name__ == '__main__':
    extract_data(emg)
    run = extract_data(emg)
    print(run)