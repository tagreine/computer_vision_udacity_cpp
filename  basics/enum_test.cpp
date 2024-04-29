#include <iostream>

using std::cout;
using std::cin;

int main() {
    // building the enumerator with red blue and green
    enum Color {red, blue, green};
    // initializing the enumerator

    Color r {red};

    // using switch to execute one of the three enumerators
    switch (r)
    {
    case red:
        cout << "You picked red!";
        break;
    case blue:
        cout << "You picked blue!";
        break;
    case green:
        cout << "You picked green!";
        break;
    default:
        cout << "You picked something else!";
        break;
    }

    return 0;
}