#include <iostream>

using namespace std;

void basic_dynamic_memory_allocation(){
    //Basic of Dynamic Memory Allocation
    int* p_number {nullptr};
    p_number = new int;

    delete p_number;
    p_number = nullptr;

    // Addressing up on declaration
    int* p_number2{ new int{700}};
    cout << p_number2 << endl; // 0x559d9db71eb0
    cout << *p_number2 << endl; // 700

    delete p_number2;
    p_number2= nullptr;

    p_number2 = new int{451}; // reusing a pointer
    cout << p_number2 << endl; // 0x559d9db71eb0
    cout << *p_number2 << endl; // 451
}

void error_dynamic_memory_allocation(){
  /*
    Pointer Declaration: int* p_num;
    declares a pointer p_num of type int*, but it does not initialize it.
    This means p_num could point to any random memory location, which is dangerous.

    Dereferencing Uninitialized Pointer: *p_num = 55;
    attempts to dereference the pointer and assign the value 55 to the memory location it points to.
    Since p_num is uninitialized, this operation leads to undefined behavior.
    The program might crash, or worse, it might corrupt memory, leading to difficult-to-debug errors.
    */
    int* p_num;
    *p_num = 55;
    cout << *p_num << endl;
    // don't do this
    }


int main(){
    // basic_dynamic_memory_allocation();
    error_dynamic_memory_allocation(); 
    return 0;
}

