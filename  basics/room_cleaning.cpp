#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() 
{

    // variable declerations and initializations
    string size_of_room;
    string large;
    string small;
    const int expire_date = 30; //days
    const float tax = 0.06; //percent
    int number_of_rooms;
    double room_cost;

    // greeting message
    cout << "Hello room user!" << endl;
    // prompt user to input room size
    cout << "What was the size of your room(s) (large or small): ";
    cin >> size_of_room;
    
    // prompt user to input number of rooms
    cout << "How many " << size_of_room << " rooms did you rent?";
    cin >> number_of_rooms;

    cout << endl;
    cout << "Estimate for room cleaning service" << endl;
    cout << "------------------------------------" << endl;
    if ( size_of_room == "large" /* condition */) {
        /* code */
        room_cost = 35.0;
        cout << "Number of " << size_of_room << " rooms: " << number_of_rooms << endl;
        cout << "Price pr large room: $" << room_cost << endl;
        cout << "Cost: $" << number_of_rooms * room_cost << endl;
        cout << "Tax: $" << number_of_rooms * room_cost * tax << endl;
        cout << "Total cost: $" << number_of_rooms * room_cost + number_of_rooms * room_cost * tax << endl;
        cout << "This estimate is valid for " << expire_date << " days." << endl;

    }
    else if ( size_of_room == "small" /* condition */)
    {
        /* code */
        room_cost = 25.0;
        cout << "Number of " << size_of_room << " rooms: " << number_of_rooms << endl;
        cout << "Price pr large room: $" << room_cost << endl;
        cout << "Cost: $" << number_of_rooms * room_cost << endl;
        cout << "Tax: $" << number_of_rooms * room_cost * tax << endl;
        cout << "Total cost: $" << number_of_rooms * room_cost + number_of_rooms * room_cost * tax << endl;
        cout << "This estimate is valid for " << expire_date << " days." << endl;

    }
    else {
        cout << "You entered a non-valid room size" << endl;
    }

    return 0;
}