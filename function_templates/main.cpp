#include<iostream>

using namespace std;

//function template is a mechanism to set up blueprints  for functions.

/*  structure

template <typename T>
T add(T a, T b ){
    return a+b;
}

*/

template <typename T>
T add(T  a, T b ){
    return a+b;
}

// passing by reference
template <typename T>
T & devide(T & a, T & b ){
    return a / b;
}

// this is template specialization.
template <>
int add(int a, int b){
    return a + b;
}


int main(){
    auto x =  add(12, 18);
    cout << x << endl;
    cout << typeid(x).name() << endl;

    auto y = add<string>("hello, ", "World!");
    cout << y << endl;



    return 0;
}

