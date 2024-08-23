#include <iostream>
#include <string>
#include "functions.h"

using namespace std;

void print_string(string a){
    cout << a << endl;
}

int make_square ( int a){
    return a * a ;
}

int main(){
   /*
   structure:

    return_type function_name(parameter){
        function_body
        return return_type;
    }

   */
    print_string("Hello, World");

    int result = make_square(5);
    cout << result << endl;

    //using functions from different file;
    result = add(10, 5);
    cout << result << endl;



    return 0;
}