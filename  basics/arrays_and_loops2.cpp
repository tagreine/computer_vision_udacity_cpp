#include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::size;

int main()
{
    // initialize array
    string student_names[] {"Tom", "Thomas", "Ben", "Laila", "Eva", "Jesus"};

    string name_to_skip {"Ben"};

    for (int i = 0; i < size(student_names); i++){
        if (student_names[i] == name_to_skip) {
            cout << "Skipping index " << i << endl;
            continue;
        } 
        cout << student_names[i] << endl;   
    }
}
