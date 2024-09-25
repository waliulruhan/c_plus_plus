#include<iostream>

using namespace std;

/*
struct VS class

In class members are private by default but in struct members are public by default.
But we can still use public, private and proteted keyword in struct.

*/

struct MyStruct{
    int age{99};
    int number{2359745};
};

int main(){
    MyStruct my_struct;
    cout << my_struct.age << "  " << my_struct.age <<endl;

    return 0;
}










// well written by Waliul Rohan