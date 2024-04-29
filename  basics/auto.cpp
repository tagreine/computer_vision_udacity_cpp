#include <iostream>
#include <typeinfo>

using namespace std;

int main ()
{
    auto int_var = 20;
    auto float_var {20.2F};
    auto string_var = "Hello World!";

    cout << "Type: " << typeid(int_var).name() << endl;
    cout << "Type: " << typeid(float_var).name() << endl;
    cout << "Type: " << typeid(string_var).name() << endl;

}