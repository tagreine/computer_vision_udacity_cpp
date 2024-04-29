#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;
using std::toupper;

int main()
{
    vector<string>  vec;
    vec.push_back("New York");
    vec.push_back("Oslo");
    vec.push_back("Bergen");

    // prompt user to enter a city 
    string city;
    cout << "Enter a city name: ";
    cin >> city;

    cout << endl;

    // find the city using std::find method 

    auto it = std::find(vec.begin(), vec.end(), city);

    // convert to all upper case if the city is in the vector
    if (it != vec.end()) {
        string new_city{city};
        for (auto & c: new_city) c = toupper(c);
        *it = new_city;
    }
    for (auto it = vec.begin(); it != vec.end(); it++){
        cout << *it << endl;
    }

    return 0;
}