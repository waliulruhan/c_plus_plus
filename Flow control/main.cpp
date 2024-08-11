#include <iostream>
// flow control

int if_else(){
    int a = 5;
    int b = 10;


    if(a > b){
        std::cout << "a is greater that b\n";
    }else{
        std::cout << "a is not greater that b\n";
    }
    std::cout <<   "--------------------------------" << std::endl;
    std::cout << "making a=20 \n";


    a = 20;

    if(a > b){
        std::cout << "a is greater that b\n";
    }else{
        std::cout << "a is not greater that b\n";
    }


    return 0;
}
 void age_switch(int age){
  
        switch(age){
                case 0:{
                    std::cout << "you are 0 years old" << std::endl;
                }
                break;
                case 10:{
                    std::cout << "you are 10 years old" << std::endl;
                }
                break;
                case 20:{
                    std::cout << "you are 20 years old" << std::endl;
                }
                break;
                case 30:{
                    std::cout << "you are 30 years old" << std::endl;
                }
                break;
                default:{
                    std::cout << "your age doesn't match our condition" << std::endl;
                }
                break;
            }
    }


int trying_switch(){

    int my_age{0};
    age_switch(my_age);

    std::cout << "---------------" << std::endl;
    my_age=10;
    age_switch(my_age);

    std::cout << "---------------" << std::endl;
    my_age=20;
    age_switch(my_age);

    std::cout << "---------------" << std::endl;
    my_age=30;
    age_switch(my_age);

    std::cout << "---------------" << std::endl;
    my_age=40;
    age_switch(my_age);

    return 0;
}

int main(){
    // if_else();
    // trying_switch();

    // ternary Operator

    int x = 20;
    int y = 40;

    int z = (x > y) ? 99 : 44 ;
    // condition didn't matched so value of z will be 44
    std::cout << z << std::endl;

    return 0;
}