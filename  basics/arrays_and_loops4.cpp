#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using std::cout;
using std::endl;
using std::vector;

int main() 
{
    vector<double> int_vec {1.2, 1., 2., 2.2};

    for (auto it = int_vec.begin() ; it != int_vec.end(); it++ ) {
        cout << *it << endl;
    }

    return 0;
}