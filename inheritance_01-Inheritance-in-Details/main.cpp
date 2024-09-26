#include<iostream>
#include<string>

/*
###
INHERITANCE
.A defining featur of OOP in C++
.Building types on top of other types
.Inhetance hierchies can be set up to suit your needs
.Code rescue is improvede

###
In class we can use Protected members;
They act like private members from outside but they are accessible from the class itself, as well as from derived class.

###
There are 3 types of inheritance:
1. Public --> evething remain same;
2. Protected -> only public members become protectes;
3. Private --> Everything becomes private;

###
'using'
Resurrcting members back in scope;
we can resurect those members back into scope which are made private by inheritance not by initial;
The members which are private by born can't be resurrected;



*/
using namespace std;

class Person {
    protected:
        string name;

        Person(string n) {
            name = n;
        }

    private:
        int age = 9999;  // Private members can't be accessed even from derived classes
};

class Engineer : private Person { 
    public:
        string occupation;

        Engineer(string n, string occ) : Person(n) { 
            occupation = occ;
        }

    protected:
        // Resurrecting `name` to be accessible in the derived class
        using Person::name;

        // using Person::age; we can't resurrect this cause thisis private by born.
};

class CivilEngineer : private Engineer {  // Private inheritance from Engineer
    public:
        string section;

        CivilEngineer(string n, string occ, string sec) : Engineer(n, occ) {
            section = sec;
        }

        void showInfo() {
            cout << name << " is a " << section << " " << occupation << endl;
        }

    protected:
        // Resurrecting `occupation` to be accessible in the derived class
        using Engineer::occupation;
};

int main() {
    CivilEngineer c1("RandomGuy", "engineer", "civil");
    c1.showInfo();

    // The following will give errors because 'name' and 'occupation' are private:
    // cout << c1.name;         // Error: 'name' is inaccessible
    // cout << c1.occupation;   // Error: 'occupation' is inaccessible

    return 0;
}