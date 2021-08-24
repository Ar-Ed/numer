import sys
from time import time
from numer.cmath import log10, cos, exp
from numer.mpz import print_fib, factorial

#print(cos(30.3321423, radian=False))
#print()
#print_fib(int(sys.argv[1]))


def func():
    factorial(int(sys.argv[1]))
    print('finished')

a = time()    
func()
b = time()
print(b-a)