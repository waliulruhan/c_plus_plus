#include <iostream>

using namespace std;

int main (){
    // A memory leak happens when a compter allocates a memory but fails to relese it back to the system after it's no longer neened

    int* p_number1{new int{20}};
    cout << p_number1 << endl;  // 0x5617e7d4beb0
    int num{99};
    p_number1 = &num; // memory of the int{20} leaked
    cout << p_number1 << endl; // 0x7ffe13eefb0c


    int* p_number2{new int{55}};
    p_number2 = new int{99}; //Memory with the int{55} leaked

    {
        int * p_number3 {new int{888}};
    }// memory with the  int{888}  leaked

    // When we no longer use a memory we should release it by using "delete" keyword
    return 0;
}