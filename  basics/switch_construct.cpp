#include <iostream>

using std::cout;
using std::cin;
using std::endl;

enum class TaskStatus{ // enum class to make it more c++ 
    NOT_STARTED = 1,
    IN_PROGRESS,
    COMPLETED_SUCCESS,
    COMPLETED_FAILURE
};

int main()
{
    int status;
    cout << "Please enter the current status of the task: ";
    cin >> status;

    // to access the class elements, we need to access them via the scope resolution operator
    // TaskStatus task_status = static_cast<TaskStatus>(status); 

    switch (TaskStatus task_status = static_cast<TaskStatus>(status); task_status)
    {
    case TaskStatus::NOT_STARTED: // now every entery is part of the TaskStatus scope, using the scope resolution operator
        cout << "The task is not started!" << endl;
        break;
    case TaskStatus::IN_PROGRESS:
        cout << "The task is in progress!" << endl;
        break;
    case TaskStatus::COMPLETED_SUCCESS:
        cout << "The task was a success!" << endl;
        break;
    case TaskStatus::COMPLETED_FAILURE:
        cout << "The task was a failure!" << endl;
        break;
    default:
        cout << "unknown status!" << endl;
        break;
    }
}