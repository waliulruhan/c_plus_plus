#include <iostream>
#include <string>

/*
In C++ the 'this' keyword is a pointer that refers to the current objecy of a class.

It has many use cases.

1. conflict names:
void setName(string& name){
    // name = name;  compiler will get confused here
    this -> name = name;  compiler will not get confused here
}

2.chained calls using pointers:
myclass -> setName("random name") -> set_age(6);  // using pointer
myclass -> setName("random name").set_age(6); // using reference

*/

using namespace std;

class MyClass{
    private:
        string name;
        int age;
    public:
       MyClass* set_name(const string& name){
            this -> name = name;
            return this;
        }
       MyClass* set_age(int age){
            this -> age = age;
            return this;
        }
        ~MyClass(){
            cout << "My name is: " << name << ". My age is: " << age << endl;
        }

};

class MyReferenceClass{
    private:
        string name;
        int age;
    public:
       MyReferenceClass& set_name(const string& name){
            this -> name = name;
            return *this;
        }
       MyReferenceClass& set_age(int age){
            this -> age = age;
            return *this;
        }
        ~MyReferenceClass(){
            cout << "My name is: " << name << ". My age is: " << age << endl;
        }

};
int main() {

    MyClass* my_class = new MyClass();
    my_class -> set_name("waliul") -> set_age(999999);

    MyReferenceClass my_reference_class;
    my_reference_class.set_name("Rohan").set_age(55555);


    delete my_class;
    
    return 0;
}
