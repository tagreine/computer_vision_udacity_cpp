#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() 
{
    char ch;
    cout << "Please enter a letter in the alphabet: ";
    cin >> ch;

    if (std::isalpha(ch)) {
        switch (ch = std::tolower(ch); ch) // switch can evaluate functions constructed with constexpr
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "The character you have entered is a vowel" << endl;
            break;
        default:
            cout << "The character you have entered is NOT a vowel" << endl;
            break;
        }
    } else {
        cout << "The character you have entered is NOT valid!" << endl;
    }
}