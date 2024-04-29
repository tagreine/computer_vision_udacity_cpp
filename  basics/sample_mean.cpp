#include <iostream>

using namespace std;

int main() 
{
    int N = 5;
    int numbers[N];
    float sum = 0;
    int i;

    for ( i=0; i < N ; i++) {
        numbers[i] = rand()%100;
        cout << "number" << "[" << i << "]" << " = " << numbers[i] << endl;
        sum+=numbers[i];
    }

    // compute the mean of the random array
    sum /= N;
    cout << "Mean: " << sum << endl;
    return 0;
}