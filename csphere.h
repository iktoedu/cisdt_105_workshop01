#ifndef CSPHERE_H
#define CSPHERE_H


class CSphere
{
public:
    CSphere();
    CSphere(double x, double y, double z, double r);
    CSphere(CSphere &sphere);

    bool isValid();

    double getSurfaceArea();
    double getVolume();

private:
    double x,y,z,r;
};

#endif // CSPHERE_H
