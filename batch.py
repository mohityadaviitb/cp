import numpy as np
from scipy.integrate import odeint
import matplotlib.pyplot as plt

# System parameters
alpha = [4.0, 2.0, 1.0]  # Relative volatilities [A, B, C]
F = 100.0                 # Initial feed [mol]
x0 = [0.5, 0.3, 0.2]      # Initial mole fractions [A, B, C]
N = 6                     # Number of equilibrium stages
xD_target = 0.85          # Target distillate comp for key component (A)

def ternary_vle(x, alpha):
    denom = sum(alpha[i]*x[i] for i in range(3))
    return [alpha[i]*x[i]/denom for i in range(3)]

def batch_distillation(state, t):
    B, xA, xB = state
    xC = 1 - xA - xB
    x = [xA, xB, xC]
    
    # Calculate VLE
    y = ternary_vle(x, alpha)
    
    # Underwood equations for minimum reflux
    theta = alpha[0]*xD_target/(xD_target + (alpha[0]-1))
    R_min = (xD_target - theta)/(theta - x[0])
    R = R_min * 1.2
    
    # Material balance equations
    dBdt = -1/(R + 1)
    dxAdt = (y[0] - x[0])/B * (-dBdt)
    dxBdt = (y[1] - x[1])/B * (-dBdt)
    
    return [dBdt, dxAdt, dxBdt]

# Initial conditions
initial_state = [F, x0[0], x0[1]]

# Time grid
t = np.linspace(0, 80, 150)

# Solve ODE system
solution = odeint(batch_distillation, initial_state, t)
B = solution[:, 0]
xA = solution[:, 1]
xB = solution[:, 2]
xC = 1 - xA - xB

# Plot results
plt.figure(figsize=(12,8))
plt.plot(t, xA, label='Component A')
plt.plot(t, xB, label='Component B')
plt.plot(t, xC, label='Component C')
plt.ylabel('Mole Fraction in Still')
plt.xlabel('Time [min]')
plt.legend()
plt.grid(True)
plt.show()
