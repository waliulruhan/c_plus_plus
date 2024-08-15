#include <iostream>

using namespace std;

int main() {
    size_t array_size = 10;
    int* p_numbers1 = new int[array_size]{1, 2, 3, 4, 5, 6}; // initialized with 1,2,3,4,5,6, rest are 0's

    // Print elements using traditional for loop
    for (size_t i = 0; i < array_size; i++) {
        cout << "  ---  " << p_numbers1[i] << "  ---  " << *(p_numbers1 + i) << endl;
    }

    // Print elements using pointer arithmetic
    int* p_end = p_numbers1 + array_size;
    for (int* p = p_numbers1; p < p_end; ++p) {
        cout << *p << " ";
    }
    cout << endl;

    delete[] p_numbers1; // Free allocated memory
    return 0;
}
