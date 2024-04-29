#include <iostream>

using std::cout;
using std::endl;
using std::size;

int main() 
{
    cout << "A familiar foor loop" << endl;
    for (float i = 1.12; i < 10; i+=1.12) {
        cout << "i = " << i << endl;
    }

    cout << "A familiar array" << endl;

    const int num_students = 5;
    float student_scores[num_students] {1.2, 1.2, 2.3, 3.3, 7.0};

    for (int i = 0; i < size(student_scores); i++) {
        cout << "Student score at index " << i << " = " << student_scores[i] << endl;
    }

    return 0;
}