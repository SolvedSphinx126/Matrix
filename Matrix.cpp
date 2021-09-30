//
// Created by bwo0002 on 9/30/2021.
//

#include "Matrix.h"

Matrix::Matrix() {
    this->matrix = {};
}

Matrix::Matrix(vector<vector<double>> matrix) {
    this->matrix = matrix;
}

double Matrix::det() {

}

vector<vector<double>> * Matrix::minor(int row, int col) {
    vector<vector<double>> minor = this->matrix; // copy original matrix
    row--;
    col--;
    for(int i = 0; i < this->matrix.size(); i++)
    {
        minor[i].erase(minor[i].begin()+col);
    }
    minor.erase(minor.begin()+row);
    return &minor;
}

string Matrix::toString() {
    stringstream ans;
    double temp;
    ans << "Matrix:" << endl;
    for(int i = 0; i < this->matrix.size(); i++)
    {
        for(int j = 0; j < this->matrix[i].size(); j++)
        {
            ans << this->matrix[i][j] << ' ';
        }
        ans << endl;
    }
    return ans.str();
}

double Matrix::get(int row, int col) {
    return 0;
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




