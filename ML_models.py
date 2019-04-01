#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
@author: umaru
"""
import numpy as np
import matplotlib.pyplot as plt
from sklearn.linear_model import LinearRegression
from sklearn.svm import SVR
from sklearn.tree import DecisionTreeRegressor
from mlxtend.preprocessing import standardize
from mlxtend.feature_extraction import LinearDiscriminantAnalysis
import mlpy

## Extreme Machine Learning Regress
class ELMRegressor():
    def __init__(self, n_hidden_units):
        self.n_hidden_units = n_hidden_units

    def fit(self, X, labels):
        X = np.column_stack([X, np.ones([X.shape[0], 1])])
        self.random_weights = np.random.randn(X.shape[1], self.n_hidden_units)
        G = np.tanh(X.dot(self.random_weights))
        self.w_elm = np.linalg.pinv(G).dot(labels)

    def predict(self, X):
        X = np.column_stack([X, np.ones([X.shape[0], 1])])
        G = np.tanh(X.dot(self.random_weights))
        return G.dot(self.w_elm)


## Lin Regress
def lin_regress:
    lr = LinearRegression()
    lr.fit(X_train, y_train)
    prediction = lr.predict(X_test)

## Decision Tree
def decision_tree:
    for max_depth in range(1, 51):
        for min_samples_split in range(5, 102, 5):
            tree = DecisionTreeRegressor(max_depth=max_depth, min_samples_split=min_samples_split)
            tree.fit(X_train, y_train)
            prediction = tree.predict(X_test)

## Support Vector Machine
def SVM:
    for kernel in ["rbf", "linear", "poly", "sigmoid"]:
        svr = SVR(kernel=kernel)
        svr.fit(X_train, y_train)
        prediction = svr.predict(X_test)

## ELM implementation
for M in range(1, 200, 1):
    for i in range(30):
            ELM = ELMRegressor(M)
            ELM.fit(X_train, y_train)
            prediction = ELM.predict(X_train)
    prediction = ELM.predict(X_test)

## Linear Discrim Analysis
def LDA:
    lda = LinearDiscriminantAnalysis(n_discriminants=2)
    lda.fit(X_train, y_train)
    X_lda = lda.transform(X)

## Spectral Regress Discrim Analysis
def SRDA:
    srda = mlpy.Srda()
    srda.compute(X-train, y_train)
    srda.predict(X_train) # predict srda model on train data
    srda.realpred  # real-valued prediction
    mysrda.weights(X_train, y_train) # compute weights on training data


