#include <math.h>

double fcos(double angle, char radian)
{
    if (radian)
        return cos(angle);

    angle *= M_PI / 180;
    return cos(angle);
}
double fsin(double angle, char radian)
{
    if (radian)
        return sin(angle);

    angle *= M_PI / 180;
    return sin(angle);
}
double ftan(double angle, char radian)
{
    if (radian)
        return tan(angle);

    angle *= M_PI / 180;
    return tan(angle);
}

double fatan(double angle, char radian)
{
    if (radian)
        return atan(angle);

    angle *= M_PI / 180;
    return atan(angle);
}

double fasin(double angle, char radian)
{
    if (radian)
        return asin(angle);

    angle *= M_PI / 180;
    return asin(angle);
}
double facos(double angle, char radian)
{
    if (radian)
        return acos(angle);

    angle *= M_PI / 180;
    return acos(angle);
}

double fcosh(double angle, char radian)
{
    if (radian)
        return cosh(angle);

    angle *= M_PI / 180;
    return cosh(angle);
}

double fsinh(double angle, char radian)
{
    if (radian)
        return sinh(angle);

    angle *= M_PI / 180;
    return sinh(angle);
}

double ftanh(double angle, char radian)
{
    if (radian)
        return tanh(angle);

    angle *= M_PI / 180;
    return tanh(angle);
}

double flog(double x)
{
    return log(x);
}

double flog10(double x)
{
    return log10(x);
}

double fpow(double x, double y)
{
    return pow(x, y);
}

double fceil(double x)
{
    return ceil(x);
}

double fsqrt(double x)
{
    return sqrt(x);
}

double ffabs(double x)
{
    return fabs(x);
}

double ffloor(double x)
{
    return floor(x);
}

double ffmod(double x, double y)
{
    return fmod(x, y);
}

double fexp(double x)
{
    return exp(x);
}