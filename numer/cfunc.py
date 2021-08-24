import ctypes as c

_lib = c.CDLL("lib.so")

_lib.fcos.argtypes = (c.c_double, c.c_char)
_lib.fcos.restype = c.c_double


def cos(angle: float, radian: bool = True) -> float:
    '''Returns the cosine of the angle'''

    return _lib.fcos(angle, radian)
