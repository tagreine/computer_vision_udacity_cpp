#include <iostream>
#include <vector>
#include <string>
#include "functions.h"

using std::cout;
using std::endl;
using std::vector;    
using std::string;

// compile program with:
// compile_translated_cpp.sh

int main() {

    // initializing variables
    int n = 5;
    vector<double> p(n, 0.2);
    vector<string> world = {"green", "red", "red", "green", "green"};
    string measurements[] = {"red", "green"};
    int motions[] = {1, 1};
    double pHit = 0.6;
    double pMiss = 0.2;
    double pExact = 0.8;
    double pOvershoot = 0.1;
    double pUndershoot = 0.1;

    // run the experiment
    int num_iter = sizeof(measurements) / sizeof(measurements[0]);
    for (int i = 0; i < num_iter ; i++) {
        p = sense(p, world, measurements[i], pHit, pMiss);
        p = move(p, motions[i], pExact, pOvershoot, pUndershoot);
    }
    
    print_probs(p);

    cout << "The program compiles" << endl;
    return 0;
}


