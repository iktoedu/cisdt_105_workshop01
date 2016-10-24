#include "csphere.h"

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
