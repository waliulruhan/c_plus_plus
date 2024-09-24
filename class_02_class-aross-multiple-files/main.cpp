#include <iostream>
#include "cylinder.h"

int main() {
    Cylinder cylinder(5.0, 10.0);
    std::cout << "Volume of the cylinder: " << cylinder.volume() << std::endl;
    return 0;
}
