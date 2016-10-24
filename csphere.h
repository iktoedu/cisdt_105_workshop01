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

    bool isInsideOf(CSphere &sphere);
    bool haveCommonPointsWith(CSphere &sphere);

private:
    double x,y,z,r;

    friend void printSphere(CSphere &sphere);
};

#endif // CSPHERE_H
