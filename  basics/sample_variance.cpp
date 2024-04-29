#include <iostream>
#include <math.h>

using namespace std;

int main() {

    // initialize the variables
    int     i;
    int     N = 127;
    float   sum, sumsq, xmu, sigma1, sigma2;
    float   x[N];

    // initialize the data x(i) = i + 10^5
    for ( i=0; i<N ; i++ ) {
        x[i] = i + 100000;
    }
    
    /* algorithm1 calculate first the squared sum and sum times the mean*/
    //  calculate
    sum = 0.;
    sumsq = 0.;
    for ( i=0; i<N ; i++) {
        sum += x[i];
        sumsq += pow((double) x[i], 2.);
    }

    xmu = sum/N;
    sigma1 = sqrt( (sumsq - sum*xmu) / (N - 1) );


    /* algorithm 2 calculate the standard variance way */
    for ( i=0; i<N ; i++) {
        sumsq += pow( (double) ( x[i] - xmu ), 2. );
    }
    sigma2 = sqrt(sumsq / (N - 1));


    // output the results
    cout << "Mean: " << xmu << ", variance alg.1: " << sigma1 << ", variance alg.2: " << sigma2;
    cout << endl;
    return 0;
} // END: function main()