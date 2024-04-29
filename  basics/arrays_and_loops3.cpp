#include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::size;

int main()
{
    string students[2][3] {
        {"fan boy", "fan pan"}, // row one
        {"ban ban", "boy ban"} // row two
    };

    for (int row = 0; row <  size(students); row++) {
        for (int col=0; col < size(students[row]); col++) {
            cout << "Student of row " << row << " and column " << col << " is " << students[row][col] << endl; 
        }
    }
    return 0;
}