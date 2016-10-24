#include "csphere.h"
#include <cmath>

CSphere::CSphere()
{

}

CSphere::CSphere(double x, double y, double z, double r)
    : x(x), y(y), z(z), r(r)
{
}

CSphere::CSphere(CSphere &sphere)
    : x(sphere.x), y(sphere.y), z(sphere.z), r(sphere.r)
{
}

bool CSphere::isValid()
{
    return (r > 0);
}

double CSphere::getSurfaceArea()
{
    return 4.0 * M_PI * pow(r, 2);
}

double CSphere::getVolume()
{
    return (4.0 / 3.0) * M_PI * pow(r, 3);
}
