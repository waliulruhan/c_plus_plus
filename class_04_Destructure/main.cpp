#include <iostream>

// The destructor is automatically called when an object goes out of scope or deleted.

using namespace std;

class MyClass {
    private:
        int* data;

    public:
        MyClass(){
            cout << "class created" << endl;
            data = new int[100]; // allocating some memory
        }
        ~MyClass(){
            delete[] data; // releasing the memory 
            cout << "destructor called" << endl;
        }
};

int main() {

    MyClass thisIsMyClass;

    return 0;
}
