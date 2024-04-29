#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::string; // string is a class
using std::cout;
using std::cin;
using std::getline;
using std::endl;
using std::vector; // vector is a class
using std::find;

int main() 
{
    string first_string;
    string second_string;

    cout << "Please enter the first string: ";
    getline(cin, first_string);

    cout << "Please enter the second string: ";
    getline(cin, second_string);

    if (first_string == second_string) {
        cout << "You have entered two strings that are equal!" << endl;
    } else {
        cout << "You have entered different strings!" << endl;
    }

    vector <int> int_vector; // vector is a class

    cout << "The initial vector is empty: " << std::boolalpha << int_vector.empty() << endl;

    int_vector.push_back(30);
    int_vector.push_back(1);
    int_vector.push_back(0);
    int_vector.push_back(25);

    int x;

    cout << "Please enter element to search for: ";
    cin >> x;

    //std::vector<int>:: iterator begin_itr = int_vector.begin(); // can also use auto
    auto begin_itr = int_vector.begin();
    std::vector<int>:: iterator end_itr = int_vector.end();
    
    std::vector<int>:: iterator found_itr = find(begin_itr, end_itr, x);

    if (found_itr == end_itr) { // the end_itr is a pointer to an element past the last element
        cout << "The element was not found!" << endl;
    } else {
        cout << "The element was found!" << endl;
    }

    return 0;
}