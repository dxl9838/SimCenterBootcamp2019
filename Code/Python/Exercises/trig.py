import numpy as np
import matplotlib
#matplotlib.use('Agg’)
import matplotlib.pyplot as plt
import math

x = np.linspace(-math.pi, math.pi, 100)
plt.plot(x, np.sin(x), label='sin')
plt.plot(x, np.cos(x), label='cos')
plt.plot(x, np.tan(x), label='tan')
plt.ylim((-3,3))
plt.xlabel('x label')
plt.ylabel('y label')
plt.title("Simple Plot")

plt.legend()
#plt.show()

#ext = ‘png’
#figname = ‘trig.’ + ext
plt.savefig('trig.png')