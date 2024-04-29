#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int i;
    int terms[32]; // storing 32 bit string in the list terms
    int number = atoi(argv[1]);
// initialize the numbers in terms
    for (i=0; i < 32; i++) {terms[i] = 0;}
    for (i=0; i < 32; i++) {
        terms[i] = number%2;
        number /= 2;
    }
// write out result
    std::cout<< "Number of bytes used = " << sizeof(number) << std::endl;
    for (i=0; i < 32; i++) {
        std::cout<< "Term nr: "<< i << "Value: " << terms[i];
        std::cout<< std::endl; 
    }
}
