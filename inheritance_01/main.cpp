#include<iostream>
#include<string>

/*
INHERITANCE
.A defining featur of OOP in C++
.Building types on top of other types
.Inhetance hierchies can be set up to suit your needs
.Code rescue is improvede


*/
using namespace std;

class Person {
    public:
        string name;

        Person(string n) {
            name = n;
        }
};

class Engineer : public Person {
    public:
        string occupation;

        Engineer(string n, string occ) : Person(n) { 
            occupation = occ;
        }
};

class CivilEngineer : public Engineer {
    public:
        string section;

        CivilEngineer(string n, string occ, string sec) : Engineer(n, occ) {
            section = sec;
        }

        void showInfo() {
            cout << name << " is a " << section << " " << occupation << endl;
        }
};

int main(){

    CivilEngineer c1("RandomGuy", "engineer", "civil");
    c1.showInfo();

    return 0;
}