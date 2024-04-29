#include <iostream>
#include <string.h>
#include <climits>

using namespace std;

int main() {
    string x = "Hello!";
    char y [2] = {'H','E'};
    short a = 10000;
    short b = 100;
    int product;

    product = a * b;
    //cout << x << endl;
    //cout << y << endl;
    cout << "The product of " << a << " and " << b << " is: " << product << endl;

    cout << "The size of information on this computer are" << endl;
    cout << "================================================" << endl;

    cout << "double: " << sizeof(double) << " bytes." << endl;
    cout << "long double: " << sizeof(long double)<< " bytes." << endl;


    return 0;
}
