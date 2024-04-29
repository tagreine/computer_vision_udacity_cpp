#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;


int main() 
{
    vector <vector<int>> test {
        {1,2,3},
        {1,2,4}
    };
    
    cout << "The size: " << test.size() << endl;
    cout << "The element at index (0,0): " << test[0][0] << endl;

    
    return 0;
}
