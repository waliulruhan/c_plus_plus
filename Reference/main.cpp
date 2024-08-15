#include <iostream>

using namespace std;

void addOne(int& num){
    num += 1 ;
}

int main(){
    // I C++ , a Referance is an alias for another variable.
    // Two body one soul  -- Two name same value

    int x = 10;
    int& ref_to_x = x;
    cout << "  Main: " << x << "  Reference: " << ref_to_x << endl;
    cout << endl;

    ref_to_x = 99;
    cout << "  Main: " << x << "  Reference: " << ref_to_x << endl;
    cout << endl;

    // Using  with functions.
    int a = 5;
    addOne(a);
    cout << a << endl;


    return 0;
}

