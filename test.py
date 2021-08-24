import sys
from time import time
from numer.cmath import log10, cos, exp
from numer.mpz import print_fib, factorial, fibonacci
from numer.cmath import sqrt

# print(cos(30.3321423, radian=False))
# print()
# print_fib(int(sys.argv[1]))


def timer(func, *args, **kwargs):
    a = time()
    func(*args, **kwargs)
    b = time()
    print(b-a)


""" 
@timer
def func():
    factorial(1000)
    print('finished')

 """
# timer(func)
""" 
@timer
def func1():
    print(fibonacci(1_000_000, 1000))
    print('finished')
 """


print_fib(1)
print(sqrt(5.3))
