#include <iostream>
#include <vector>
#include "matrix.h"

using std::vector;
using std::cout;
using std::endl;

int main () {
    
    vector<vector<float>> initial_grida(7, vector <float>(5, 0.4));
    vector<vector<float>> initial_gridb(7, vector <float>(5, 0.2));

    Matrix matrixa(initial_grida);
    Matrix matrixb(initial_gridb);

    Matrix matrixc;
    matrixc = matrixa.matrix_addition(matrixb);
    
    matrixc.matrix_print();

    return 0;
}