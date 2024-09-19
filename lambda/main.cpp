#include <iostream>

using namespace std;

/*
lambda fuction structure

[capture list] (parameter list) -> return type "optional"{
    //function body
};
*/

auto func1 = [](){
    cout << "hello world" << endl;
};

int main(){
    func1();

    [](){
        cout << "Hello again" << endl;
    }();

    auto a = []() -> int {
        return 5;
    };

    cout << a() << endl;

    // capture list

    int num1 = 20;
    int num2 = 20;
    
    [num1, num2](){
        cout << num1 + num2 << endl;
    }();

    // [num1, num2] capturing by value
    // [&num1, &num2] capturing by reference

    [=]() {  //  captures everything by value
        cout << a() << endl;
    }();

    // [&] captures everything by value

    return 0;
}