#include "cylinder.h"
#include <cmath>

Cylinder::Cylinder(double r, double h) : radius(r), height(h) {}

double Cylinder::volume() const {
    return M_PI * radius * radius * height; // Volume = πr²h
}
