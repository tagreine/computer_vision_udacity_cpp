#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <vector>

using std::vector;

// header class for the matrix class
class Matrix 
{
    // declaring private variables
    private:
        vector<vector<float>> grid; // the matrix object in the class
        vector<float>::size_type rows; // number of rows
        vector<float>::size_type cols; // number of columns

    // declaring public member functions/constructors
    public:
        // constructors
        Matrix();
        Matrix(vector<vector<float>>);

        // setters
        void setGrid(vector<vector<float>>);

        // getters
        vector<vector<float>> getGrid();
        vector<float>::size_type getRows();
        vector<float>::size_type getCols();

        // member functions
        Matrix matrix_addition(Matrix);
        Matrix matrix_transpose();
        void matrix_print();

};

#endif /* MATRIX_H */