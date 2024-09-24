#include <iostream>
#include "cylinder.h"

// We can create objects in heap
using namespace std;

int main() {

    //way 1
    Cylinder* p_c1 = new Cylinder(12.6, 8.98);
    cout << "volume of c1 using method 1 :  " << (*p_c1).volume() << endl; // method 1
    cout << "volume of c1 using method 2 :  " <<  p_c1 -> volume() << endl; // method 2

    cout << "-----  -----  -----  -----  -----  -----" << endl;

    //way 2
    Cylinder c2(2.2, 3.5);
    Cylinder* p_c2 = &c2;
    cout << "volume of c2 using method 1 :  " <<  (*p_c2).volume() << endl; // method 1
    cout << "volume of c2 using method 2 :  " <<  p_c2 -> volume() << endl; // method 2


    return 0;
}
