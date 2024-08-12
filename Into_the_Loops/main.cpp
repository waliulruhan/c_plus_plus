#include <iostream>

/*
 main pillers of loop
 1. Iterator
 2. Srarting point
 3. Test
 4. Increment/Decrement
 5. Loop body

 4 types of loop
  for loop
  range based for loop
  while loop
  do while loop
*/

void for_loop_func(){
    char a[] = "HI, I am here";

    for(size_t i {}; i < 10; ++i){
        std::cout << a << "  " << i << std::endl;
    }
}

void while_loop_func(){
    size_t COUNT {10};
    size_t i {};
    while (i < COUNT)
    {
        std::cout << i << " missisipi" << std::endl;
        ++i;
    }
    
}
void do_while_loop_func(){
    size_t COUNT {10};
    size_t i {};
    do
    {
        std::cout << "DO while" << i << std::endl;
        ++i;
    } while (i < COUNT);
  
}

int main(){

    for_loop_func();
    while_loop_func();
    do_while_loop_func();

    return 0;
}