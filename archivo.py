import os
import matplotlib.pyplot as plt 
import numpy as np

os.system("g++ caminata.cpp -o archivo")
os.system("./archivo > datos.dat")

datos= np.loadtxt("datos.dat")
x=datos[:,0]
y=datos[:,1]

plt.figure()
plt.grid()
plt.plot(x,y)
plt.savefig("21.png")