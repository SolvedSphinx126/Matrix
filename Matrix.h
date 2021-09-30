//
// Created by bwo0002 on 9/30/2021.
//

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

#ifndef MATRIX_MATRIX_H
#define MATRIX_MATRIX_H


class Matrix {
private:

public:
    int rows, cols;
    vector<vector<double>> matrix;

    Matrix();
    Matrix(vector<vector<double>> matrix);
    double det();
    void query();
    vector<vector<double>> minor(int row, int col);
    string toString();
    void scaleRow(int row, double scalar);
    void scaleCol(int col, double scalar);
};


#endif //MATRIX_MATRIX_H
