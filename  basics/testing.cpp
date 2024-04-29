#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
    
int main()
{
    float student_scores[5];
    
    cout << student_scores[0] << endl;
        
    for (int i = 0; i < 2; i++) {
        cout << "student_score at index " << i << " = " <<    student_scores[i-1] << " "  ;  
        }
}

