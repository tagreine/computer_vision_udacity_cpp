#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::string;

int main ()
{
    int num1, num2;

    // prompt user to input two integers
    // cout <<"Gief two integers: ";
    // cin >> num1 >> num2;

    // cout << "Sum is: " << num1 + num2 << endl;
    // cout << endl;

    // string name, city;
    // // prompt user to input name and city
    // cout << "What is your name? ";
    // getline(cin, name);

    // cout << "Where do you live? ";
    // getline(cin, city);

    // cout << "Hello " << name << " mr " << city << endl;

    // // prompt user to input name
    // char letters;
    // cout << "Write your name to get the first three letters: " ;
    // cout << "The first three letters in your name are: " << endl;
    // cin.get(letters);
    // cout << letters << endl;
    // cin.get(letters);
    // cout << letters << endl;
    // cin.get(letters);
    // cout << letters << endl;

    int favorite_number;
    char favorite_char;

    cout << "What is your favorite integer number? ";
    cin >> favorite_number;
    cout << "Your favorite integer is " << favorite_number << endl;

    cin.ignore();

    cout << "What is your favorite character (hit enter to quit): ";
    cin.get(favorite_char);
    if (favorite_char == '\n') {
        cout << "Exiting...." << endl;
    } else {
        cout << "Your favorite character is: " << favorite_char << endl;
    }





    return 0;
}