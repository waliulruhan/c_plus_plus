#ifndef CYLINDER_H
#define CYLINDER_H


class Cylinder {
public:
    Cylinder(double radius, double height);
    double volume() const;

private:
    double radius;
    double height;
};

#endif // CYLINDER_H
