#include <iostream>
#include <string>
#include <limits> 

#include <iomanip>
#include <ios>



int addNumbers(int a  ,int b){
    return a + b;
}
int theBasicStaffs (){
    std::cout << "hello world" << std::endl;    

    std::cerr << "my custom error" << std::endl;    

    // Taking input
    int age;
    std::cout << "Please enter your age :" << std::endl;
    std::cin >> age;

    std::cout << "You entered: " << age << std::endl;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::string name;
    std::cout << "Please enter your name :" << std::endl;
    std::getline(std::cin, name); 
    std::cout << "You entered: " << name << std::endl;


    // using function

    int res = addNumbers(10, 5);

    std::cout << res << std::endl;

    return 0;

}

int dataTyes (){
    // integers and float and double
    int num1 {22};
    float num2 {22.346};
    double num3 {22.346344};
    long double num4 {22.346344};


    std::cout << "size of int   " << num1 << " is  " <<sizeof(num1) << std::endl;
    std::cout << "size of float  "<< num2 << "  is  "  <<sizeof(num2) << std::endl;
    std::cout << "size of double  " << num3 << "  is  " <<sizeof(num3) << std::endl;
    std::cout << "size of long double  "<< num3 << "  is  "  <<sizeof(num4) << std::endl;
    
    // boolean
    bool red_flag {false};
    std::cout << std::boolalpha;   // this will print red_flag as "false" not 0
    std::cout << "size of bool  "<< red_flag << "  is  "  <<sizeof(red_flag) << std::endl;
    
    // character
    char char1 {'a'};
    std::cout << "size of char  "<< char1 << "  is  "  <<sizeof(char1) << std::endl;


    return 0;
}


int outputFormatting(){
    std::cout << "hello world" << std::endl;
    std::cout << "hello world" << std::flush;

    std::cout << std::setw(50) << "hello world" << std::endl;
    std::cout << std::setw(50) << std::setfill('-') << "hello world" << std::endl;
    std::cout << std::setw(50) << std::setfill(' ') << std::right << "hello world" << std::endl;
    std::cout << std::setw(50) << std::left << "hello world" << std::endl;
    
    std::cout << std::uppercase; // this wil make x393484 to X393484
    std::cout << std::hex << 28 << std::endl;
    std::cout << std::nouppercase;
    std::cout << std::hex << 28 << std::endl;



    return 0;
}


int main() { 
    //theBasicStaffs();
    //  dataTyes();  
    outputFormatting();

    return 0;
}



/*
Yes, you can use comments
Even multiline comments
*/
