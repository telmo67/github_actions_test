"""
Simple sine wave plotting module
"""

import numpy as np
import matplotlib.pyplot as plt

def sin(x):
    """Retun the sine of x"""
    return np.sin(x)

def plot(t1, t2, output_file="./sine.png"):
    """Plot sine wave between t1 and t2 and save to file."""
    t = np.linspace(t1, t2, 1000)
    plt.plot(t, sin(t))
    plt.title("Sine Wave")
    plt.xlabel("x")
    plt.ylabel("sin(x)")
    plt.grid(True)
    plt.savefig(output_file)
    plt.close()

if __name__ == "__main__":
    plot(0, 2*np.pi)
