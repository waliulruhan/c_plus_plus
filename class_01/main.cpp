#include<iostream>

using namespace std;

double PI = 3.1415;
class Cylinder {
    public:
        double volume(){
            return PI * radius * radius * height;
        }

        Cylinder() = default;  // default constructor

        Cylinder(double radius_param, double height_param){  // constructor
            radius = radius_param;
            height = height_param;
        }

        double get_radius(){ // getter
            return radius;
        }

        void set_radius(double radius_param){  // setter
            radius = radius_param;
        }

    private:
        double radius{1.0};
        double height{1.0};    
};

int main(){
    Cylinder c1;

    Cylinder c2(2, 2);

    // c2.radius;   can't access private members.

    cout << c2.get_radius() << endl;
    c2.set_radius(10);
    cout << c2.get_radius() << endl;


    
    // I was using these before using the private 

    // cout <<  "height:  " << c1.height << endl;
    // cout << "volume" << c1.volume() << endl;

    // c1.height = 2;

    // cout << "height:  " << c1.height << endl;
    // cout << "volume" << c1.volume() << endl;

    return 0;
}