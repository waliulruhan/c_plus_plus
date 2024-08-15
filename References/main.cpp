#include <iostream>

void integers_array(){

    int scores[5] ; // initialized with o's
    int age[5]{} ; // initialized with o's
    int numbers[5]{1, 2, 3, 4, 5};

    std::cout << scores << std::endl;  //  0x7ffdd39a4400
    std::cout << age << std::endl;  //  0x7ffdd39a4430
    std::cout << numbers << std::endl; // 0x7ffdd39a43e0  these will not print the array

    for (size_t i = 0; i < std::size(scores); ++i)
    {
        std::cout << scores[1] << std::endl;
    }


    for (size_t i = 0; i < std::size(age); ++i)
    {
        std::cout << age[1] << std::endl;
    }


    for (int element : numbers)// range based for loop
    {
        std::cout << element << std::endl;
    }
    
}

void character_array(){
    char my_array[] {'a', 'b', 'c', '1', '2', '3'};
    char my_good_array[] {'a', 'b', 'c', 'A', 'B', 'C', '\0'};// null terminated array. This is called c-string
    char my_best_array[] {"hello world"};

    
    for (auto element : my_array)// range based for loop
    {
        std::cout << element << std::endl;
    }

    for (char element : my_good_array)// range based for loop
    {
        std::cout << element << std::endl;
    }

    for (char element : my_best_array)// range based for loop
    {
        std::cout << element << std::endl;
    }

    // we can only print character array
    std::cout << my_array << std::endl; // as this is not null nurminated this will print "abc123abcABC"
    std::cout << my_good_array << std::endl;
    std::cout << my_best_array << std::endl;
    
}

int main(){
    integers_array();
    character_array();

    return 0;
}