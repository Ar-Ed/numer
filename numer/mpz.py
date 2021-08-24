import ctypes as c

_ = c.CDLL('Cfiles/gmp.so')

_.pfib.argtypes = (c.c_ulonglong,)

def print_fib(term_count: int):
    _.pfib(term_count)


if __name__ == "__main__":
    pass
