import sys
from time import time
import math as m

from numer.cmath import log10, cos, exp, sqrt
from numer.mpz import print_fib, factorial, fibonacci


# print(cos(30.3321423, radian=False))
# print()
# print_fib(int(sys.argv[1]))


def timer(func):
    def ff():
        a = time()
        func()
        b = time()
        print(b-a)
    return ff


@timer
def func():
    cos(100.321)
    print('finished')


@timer
def func2():
    m.cos(100.321)
    print('math finished')


func()
func2()


""" @timer
def func():
    factorial(100)
    print('finished')

@timer
def func2():
    m.factorial(100)
    print('math finished')

func()
func2() """
# timer(func)
""" 
@timer
def func1():
    print(fibonacci(1_000_000, 1000))
    print('finished')
 """

log10(10)
exp(10)
sqrt(0)
print_fib(1)
print(sqrt(5.3))
