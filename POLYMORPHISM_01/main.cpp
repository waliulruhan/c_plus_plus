#include<iostream>

/*
The word "POLYMORPHISM" is made from two greek words.
poly(many) and morphism(forms).

what is polymorphism?
=> Manaing derives objects in memory throgh base pointers or references and getting the right method called on the base pointer or reference.


*/


using namespace std;

class Animal {
    public:
        virtual void sound(){
            cout << "Animal sound" << endl;
        }
};

class Dog: public Animal {
    public:
        void sound () override{
            cout << "BARK BARK. I am a dog." << endl;
        }
};

class Cat: public Animal {
    public:
        void sound () override{
            cout << "MEOW MEOW. I am a cat." << endl;
        }
};

int main() {
    Animal * a1 = new Dog();
    Animal * a2 = new Cat();

    a1 -> sound();
    a2 -> sound();

    delete a1;
    delete a2;

    return 0;
}
