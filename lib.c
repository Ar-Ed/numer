#include <math.h>

double fcos(double angle, char radian)
{
    if (radian)
        return cos(angle);

    angle *= M_PI / 180;
    return cos(angle);
}