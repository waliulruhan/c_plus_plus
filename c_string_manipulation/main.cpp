#include <iostream>
#include <cstring> // Required for C-string functions

using namespace std;

int main() {
    // 1. Initialization
    char str1[50] = "Hello, ";             // C-string with predefined size
    char str2[] = "World!";                // C-string with automatic size
    const char* str3 = "C-String Manipulation"; // Pointer to a C-string

    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;
    cout << "str3: " << str3 << endl;

    // 2. Length of a C-string
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);
    cout << "Length of str1: " << len1 << endl;  // Outputs: 7 (including space)
    cout << "Length of str2: " << len2 << endl;  // Outputs: 6

    // 3. Copying C-strings
    char str4[50];
    strcpy(str4, str3); // Copy str3 into str4
    cout << "After copying, str4: " << str4 << endl;

    // 4. Concatenating C-strings
    strcat(str1, str2); // Append str2 to str1
    cout << "After concatenation, str1: " << str1 << endl;

    // 5. Comparing C-strings
    int cmp1 = strcmp(str1, str2); // Compare str1 and str2
    int cmp2 = strcmp(str2, "World!"); // Compare str2 with "World!"

    if (cmp1 == 0) {
        cout << "str1 and str2 are equal." << endl;
    } else if (cmp1 > 0) {
        cout << "str1 is greater than str2." << endl;
    } else {
        cout << "str1 is less than str2." << endl;
    }

    if (cmp2 == 0) {
        cout << "str2 is equal to 'World!'." << endl;
    }

    // 6. Searching within a C-string
    // Find the first occurrence of 'W' in str1
    char* pos = strchr(str1, 'W');
    if (pos != nullptr) {
        cout << "'W' found at position: " << (pos - str1) << endl;
    }

    // Find the first occurrence of "World" in str1
    char* substr_pos = strstr(str1, "World");
    if (substr_pos != nullptr) {
        cout << "'World' found at position: " << (substr_pos - str1) << endl;
    }
    return 0;
}
