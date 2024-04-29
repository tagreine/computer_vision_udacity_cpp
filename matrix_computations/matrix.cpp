#include "matrix.h"
#include <vector>

using std::vector;
using std::cout;
using std::endl;
// declare the default constructor

Matrix::Matrix() {
    vector<vector<float>> initial_grid(10, vector<float>(5, 0.5));
    grid = initial_grid;
    rows = initial_grid.size();
    cols = initial_grid[0].size();
}

Matrix::Matrix(vector<vector<float>> initial_grid) {

    grid = initial_grid;
    rows = initial_grid.size();
    cols = initial_grid[0].size();
}

void Matrix::setGrid(vector<vector<float>> new_grid) {
    grid = new_grid;
    rows = new_grid.size();
    cols = new_grid[0].size();
}

vector<vector<float>> Matrix::getGrid() {
    return grid;
}

vector<float>::size_type Matrix::getRows() {
    return rows;
}

vector<float>::size_type Matrix::getCols() {
    return cols;
}

Matrix Matrix::matrix_addition(Matrix other_grid) {
    
    vector<vector<float>> initial_grid(rows, vector <float>(cols, 0.0));

    Matrix new_grid(initial_grid);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols ; j++) {
            new_grid.grid[i][j] =  grid[i][j] + other_grid.grid[i][j];
        }
    }
    return new_grid;
}


void Matrix::matrix_print() {
    for (int i = 0; i < rows; i++) {
        cout << "| ";
        for (int j = 0; j < cols ; j++) {
            cout << grid[i][j] << " ";
        }
        cout << "|" << endl;
    }
}
