#include <iostream>
#include <cctype> // for character functions

using namespace std;

int main() {
    char ch = 'a';

    // Convert to uppercase
    char upperCh = toupper(ch);
    cout << "Original: " << ch << " -> Uppercase: " << upperCh << endl;

    // Convert to lowercase
    ch = 'B';
    char lowerCh = tolower(ch);
    cout << "Original: " << ch << " -> Lowercase: " << lowerCh << endl;

    // Check if a character is a digit
    ch = '5';
    if (isdigit(ch)) {
        cout << ch << " is a digit." << endl;
    } else {
        cout << ch << " is not a digit." << endl;
    }

    // Check if a character is a letter
    ch = 'H';
    if (isalpha(ch)) {
        cout << ch << " is a letter." << endl;
    } else {
        cout << ch << " is not a letter." << endl;
    }

    // Check if a character is an uppercase letter
    ch = 'K';
    if (isupper(ch)) {
        cout << ch << " is an uppercase letter." << endl;
    } else {
        cout << ch << " is not an uppercase letter." << endl;
    }

    // Check if a character is a lowercase letter
    ch = 'm';
    if (islower(ch)) {
        cout << ch << " is a lowercase letter." << endl;
    } else {
        cout << ch << " is not a lowercase letter." << endl;
    }

    // Check if a character is a whitespace
    ch = ' ';
    if (isspace(ch)) {
        cout << "Character is a whitespace." << endl;
    } else {
        cout << "Character is not a whitespace." << endl;
    }

    // Check if a character is punctuation
    ch = '!';
    if (ispunct(ch)) {
        cout << ch << " is a punctuation mark." << endl;
    } else {
        cout << ch << " is not a punctuation mark." << endl;
    }

    return 0;
}
