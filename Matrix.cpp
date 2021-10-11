//
// Created by bwo0002 on 9/30/2021.
//

#include "Matrix.h"

Matrix::Matrix() {
    this->matrix = {};
}

Matrix::Matrix(vector<vector<double>> matrix) {
    this->matrix = matrix;
    this->cols = matrix.size();
    this->rows = matrix[0].size();
}

double Matrix::det() {
    if(this->cols != this->rows)
    {
        return NULL;
    }
    else if(this->cols == 2 && this->rows == 2)
    {
        return this->matrix[0][0]*this->matrix[1][1]-this->matrix[0][1]*this->matrix[1][0];
    }
    else if(this->rows == 1 && this->cols == 1)
    {
        return this->matrix[0][0];
    }
    else {
        for (int col = 0; col < this->matrix.size(); col++) {

        }
    }
    return 0;
}

vector<vector<double>> Matrix::minor(int row, int col) {
    vector<vector<double>> minor = this->matrix; // copy original matrix
    row--;
    col--;
    for(int i = 0; i < this->matrix.size(); i++)
    {
        minor[i].erase(minor[i].begin()+col);
    }
    minor.erase(minor.begin()+row);
    this->cols--;
    this->rows--;
    return minor;
}

string Matrix::toString() {
    stringstream ans;
    double temp;
    ans << "Matrix:" << endl;
    for(int row = 0; row < this->matrix.size(); row++)
    {
        for(int col = 0; col < this->matrix[row].size(); col++)
        {
            ans << this->matrix[row][col] << ' ';
        }
        ans << endl;
    }

    return ans.str();
}

void Matrix::query() {
    cout << "num rows:";
    cin >> this->rows;
    cout << "num cols:";
    cin >> this->cols;



    cout << "matrix:" << endl;

    double temp;
    vector<double> vec;
    for(int i = 0; i < this->rows; i++)
    {
        for(int j = 0; j < this->cols; j++)
        {
            cout << "(" << i << ", " << j << "):";
            cin >> temp;
            vec.push_back(temp);
        }
        this->matrix.push_back(vec);
        vec.clear();
    }
}

void Matrix::scaleRow(int row, double scalar) {
    row--;
    for(int col = 0; col < this->cols; col++)
    {
        this->matrix[row][col] *= scalar;
    }
}

void Matrix::scaleCol(int col, double scalar) {
    col--;
    for(int row = 0; row < this->rows; row++)
    {
        this->matrix[row][col] *= scalar;
    }
}








