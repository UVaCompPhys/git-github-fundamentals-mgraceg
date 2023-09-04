#8/23/23
#MGG
#practice with linux enviorment 
#warm up project- n sphere calculate the volume
#creates 3d scatter plot of volume vs (n,R)


import os
from math import pi, gamma
import matplotlib.pyplot as plt
import numpy as np


#dimensions n(+1)and max volume
N= 51
mvol= 2

#setting up plot 
fig = plt.figure()
ax = fig.add_subplot(projection='3d')


#calculations
for n in range(N): 
    x= (pi **(n/2))/ (gamma(n/2+1))
    for r in np.arange(1,2.05, 0.05):
        V= x* r**n
        ax.scatter3D(n, r, V)


# plot style
ax.set_title('Volume of N-Sphere')
ax.set_xlabel('N Dimensions')
ax.set_ylabel('Radius')
ax.set_zlabel('Volume')
plt.savefig("3dnsphere_volume_py.pdf", format="pdf")
plt.show()
    
           











