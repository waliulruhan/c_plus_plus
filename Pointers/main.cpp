#include <iostream>

using namespace std;

void integer_pointer() {
    int* first_pointer;
    // cout << first_pointer << endl;   ==> 0x7f456b2f5e88

    int* second_pointer{}; 
    // cout << second_pointer << endl;  ==> 0

    int* third_pointer{nullptr}; 
    // cout << third_pointer << endl;  ==> 0

    int num {10};
    int* p_num{ &num };
    cout << p_num << endl;  
    cout << *p_num << endl;  

    num = 10029;
    cout << *p_num << endl;  
}

void character_pointer() {
    char* c_ptr{};
    char my_char{'a'};

    c_ptr = &my_char;
    cout << *c_ptr << endl;

    char my_char_array[] {"hello"};
    char* array_char_ptr{my_char_array};  // array_char_ptr points to the first character of the array

    cout << *array_char_ptr << endl;
}

int main() {
    // integer_pointer();
    character_pointer();

    return 0;
}
