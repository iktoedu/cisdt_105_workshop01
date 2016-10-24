#include <iostream>
#include "csphere.h"
#include "util.h"

using namespace std;

void playCase(CSphere *sphere1, CSphere *sphere2)
{
    cout << "Sphere 1: ";
    printSphere(*sphere1);
    cout << "Sphere 2: ";
    printSphere(*sphere2);

    if (sphere1->getSurfaceArea() == sphere2->getSurfaceArea()) {
        cout << "The areas of two shperes are equal." << endl;
    }
    else {
        cout << "The areas of two shperes aren't equal." << endl;
    }

    if (sphere1->getVolume() == sphere2->getVolume()) {
        cout << "The volumes of two shperes are equal." << endl;
    }
    else {
        cout << "The volumes of two shperes aren't equal." << endl;
    }

    if (sphere1->isInsideOf(*sphere2)) {
        cout << "The sphere 1 is inside of sphere 2 or opposite." << endl;
    }
    else {
        cout << "The sphere 1 isn't inside of sphere 2 or opposite." << endl;
    }

    if (sphere1->haveCommonPointsWith(*sphere2)) {
        cout << "The sphere 1 have common points with sphere 2." << endl;
    }
    else {
        cout << "The sphere 1 doesn't have common points with sphere 2." << endl;
    }
}

int main(int argc, char *argv[])
{

    CSphere *sphere1 = new CSphere(2, 1, 3, 12);
    CSphere *sphere2 = new CSphere(5, 6, -3, 5);

    cout << "Case 1:" << endl;
    playCase(sphere1, sphere2);
    cout << endl;

    delete sphere1;
    delete sphere2;

    sphere1 = new CSphere(2, 1, 3, 12);
    sphere2 = new CSphere(2, 0, 3, 3);

    cout << "Case 2:" << endl;
    playCase(sphere1, sphere2);
    cout << endl;

    delete sphere1;
    delete sphere2;

    sphere1 = new CSphere(2, 1, 3, 12);
    sphere2 = new CSphere(2, 0, 3, 12);

    cout << "Case 3:" << endl;
    playCase(sphere1, sphere2);
    cout << endl;

    delete sphere1;
    delete sphere2;

    return 0;
}
