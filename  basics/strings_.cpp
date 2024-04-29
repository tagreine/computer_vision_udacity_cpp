#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a_string = "Hello C++ World!";
    string a_typical_string {a_string};
    string a_shorter_string {a_typical_string.substr(2, 8)};
    string repeated_s(10, 'S');
    string appended_string;
    int comparing;

    appended_string.append(a_string).append(" ").append(a_shorter_string);
    comparing = a_typical_string.compare(2, a_shorter_string.length(), a_shorter_string); // append_string. is the receiver of the compare() and append() methods 
    
    cout << repeated_s << endl;
    cout << a_typical_string << endl;
    cout << a_shorter_string << endl;
    cout << appended_string << endl;
    cout << comparing << endl;

    return 0;
}