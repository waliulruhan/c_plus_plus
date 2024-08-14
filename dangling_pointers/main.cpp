#include <iostream>

using namespace std;
int main(){
    // dangling pointers are those pointers that do not point to a valid object of appropiate type
    // I doesn't point to a valid memory address
    /*
    1. uninitialized pinters
    2. deleted pointer
    3. multiple pointers pointing to a same memory
    */

   //solutions
   /*
    1. initializing pinters
    2. reset pointer after deleting
    3. for multiple pointers pointing to a same memory, Make sure that owner pinter is very clear
    */

   //1
   int* p_num1; // don't do this
   // do this
   int* p_num2{nullptr};
   // or
   int* p_num3{ new int {55} };

   //2
   delete p_num3; // it became dangling pointer
   //  solution
   p_num3 = nullptr; // resest the pinter

   // 3
   int* p_main = new int{10};
   int* p_sub = p_main;
   cout << *p_sub << endl; //10
   delete p_main;
   p_main = nullptr;
   cout << *p_sub << endl; //random value : 1551544525. this became danglng pointer\
    // solution
    if (!(p_main == nullptr))
    {
        cout << *p_sub << endl;
    }else
    {
        cout << "main pointer is deleted" << endl;
    }
    return 0;
}