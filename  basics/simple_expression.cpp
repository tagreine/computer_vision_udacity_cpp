#include <iostream>
#include <math.h>

using namespace std;

inline double MIN( double a, double b ) {
    return (a < b) ? a: b ;
}

inline double MAX( double a, double b ) {
    return (a < b) ? b: a ;
}

int main() {

    int a = rand()%100;
    int b = rand()%100;

    cout << "The smallest number of " << a << " and " << b << " is: " << MIN(a, b) << endl;
    cout << "The largest number of " << a << " and " << b << " is: " << MAX(a, b) << endl;

    return 0;
}

