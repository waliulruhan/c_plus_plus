#include <iostream>
#include <string>

using namespace std;

int add(int a, int b);
double add(double a, double b);
string add(string a, string b);


int main(){
    // add(x,y)   This will call a function based on the arguments I pass.

    cout << "int  " << add(20, 50) << endl;
    cout << "double  " << add(2.78, 3.54) << endl;
    cout << "string  " << add("Hello, ", "World") << endl;
    return 0;
}

int add(int a, int b){
    return a + b;
}

double add(double a, double b){
    return a + b;
}

string add(string a, string b){
    return a + b;
}