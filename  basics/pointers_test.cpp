#include <iostream>
#include <stdlib.h>
using namespace std; 

/* different variables have different pointers to a place in memory */

int main()
{
    int var;
    int *pointer;

    pointer = &var;
    var = 421;
    printf("Address of the integer variable var : %p\n",&var);
    printf("Value of var : %d\n", var);
    printf("Value of the integer pointer variable: %p\n",pointer);
    printf("Value which pointer is pointing at : %d\n",*pointer);
    printf("Address of the pointer variable : %p\n",&pointer);
}