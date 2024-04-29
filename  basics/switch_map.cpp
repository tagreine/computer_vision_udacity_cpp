#include <iostream>
#include <string>
#include <map>

using std::cout;
using std::cin;
using std::endl;
using std::string;

enum class TaskStatus {
    NOT_COMPLETED = 1,
}; 

int main()
{
    map<string, TaskStatus> task_status;

    // finish code
    task_status["not_completed"] = TaskStatus::NOT_COMPLETED;

    string status;
    cout << "Input status: ";
    cin >> status ;
    
    switch (task_status[status])
    {
    case /* constant-expression */:
        /* code */
        break;
    
    default:
        break;
    }
}