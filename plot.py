import numpy as np
import matplotlib.cm as cm
import matplotlib.pyplot as plt
import matplotlib.cbook as cbook
from pylab import*
from matplotlib.path import Path
from matplotlib.patches import PathPatch

#coor=np.loadtxt("outX.txt");
TMP=np.loadtxt("outY.txt");
TMP2=np.loadtxt("outYex.txt");
print("entrez le nombre de mailles en X")
i=input();
#while (coor[0,1]==coor[i,1]):
#    i=i+1;
A=np.zeros((i,i));
C=np.zeros((i,i))
B=np.zeros((i,i));
for j in range(i):
    for k in range(i):
        A[j,k]=TMP[k+j*i]*(1-TMP[k+j*i])+0
        C[j,k]=TMP[k+j*i]+0
        B[j,k]=TMP2[k+j*i]+0

x=np.loadtxt("outX.txt")
X,Y = np.meshgrid(x[0:i,0],x[0:i,0])
plt.pcolor(X, Y, C)
plt.colorbar()
plt.show()

plt.pcolor(X, Y, B)
plt.colorbar()
plt.show()

plt.pcolor(X, Y, A)
plt.colorbar()
plt.show()
