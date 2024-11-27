#include <iostream>

using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal sound" << endl;
    }
};

class Dog final: public Animal { // This "final" keyword restricts anymore overriding
public:
    void sound() override {
        cout << "BARK BARK. I am a dog." << endl;
    }
};

class Cat final: public Animal {// This "final" keyword restricts anymore overriding
public: 
    void sound() override {
        cout << "MEOW MEOW. I am a cat." << endl;
    }
};

int main() {
    Dog d1, d2, d3;
    Cat c1, c2, c3;

    // Array of pointers to Animal
    Animal* allAnimals[6] = {&d1, &d2, &d3, &c1, &c2, &c3};

    // Call sound() for each animal
    for (int i = 0; i < 6; ++i) {
        allAnimals[i]->sound(); 
    }

    return 0;
}
