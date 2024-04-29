#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    vector<string> countries {"India", "United States", "Singapore", "Nepal"};

    for (auto it = countries.begin(); it != countries.end();) {
        cout << *it << endl;
        it ++;
    }
}