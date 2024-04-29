#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    cout << "Hello world" << endl;
    int a;
    int b;

    cout << "Give me two numbders (seperated by space): ";
    cin >> a >> b;
    cout << "The sum of " << a << " and " << b << " is: " << a + b << endl;
    return 0;
}