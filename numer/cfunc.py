import ctypes as c

_lib = c.CDLL("lib.so")


def func():
    print('dsds')