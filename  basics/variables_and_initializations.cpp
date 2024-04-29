#include <iostream>

using std::cout;
using std::endl;

int main() 
{
    int balance; // declearing a variable
    balance = 2000; // initialization (gives garbage value if not initialized)
    int balance2 {1000}; // assignement notation, i.e., braced notation and most recommended
    cout << "My balance is " << balance << "$" << endl;
    cout << "My balance is also " << balance2 << "$" << endl;


    return 0;
}