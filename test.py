import sys
from time import time
#from numer.cmath import log10, cos, exp
from numer.mpz import print_fib, factorial, fibonacci

#print(cos(30.3321423, radian=False))
#print()
#print_fib(int(sys.argv[1]))


""" def func():
    factorial(1000)
    print('finished')

#log10(10.)
a = time()    
func()
b = time()
print(b-a) """

def func1():
    print(fibonacci(1_000_000, 1000))
    print('finished')

a = time()    
func1()
b = time()
print(b-a)