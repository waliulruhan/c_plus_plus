#include<iostream>
#include<concepts>

using namespace std;

/*
concept is a mechanism to place constrains on template type parameters.

two types of concepts 
1. built in
2. custom

*/

// syntax 1 **somewhy it's not working.
// template <typename T>
// requires integral<T>
// T add(T a, T b){
//     return a + b;
// }


// syntax 2
template <integral T>
T add(T a, T b){
    return a + b;
}

int main(){

    return 0;
}