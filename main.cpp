#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

//double det(vector<vector<double>> *matrix);
//vector<vector<double>> minor(vector<vector<double>> *matrix);
static string toString(vector<vector<double>> *matrix);


int rows, cols;

int main() {
    cout << "num rows:";
    cin >> rows;
    cout << "num cols:";
    cin >> cols;

    vector<vector<double>> matrix;

    cout << "matrix:" << endl;

    double temp;
    vector<double> vec;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cout << "(" << i << ", " << j << ")";
            cin >> temp;
            vec.push_back(temp);
        }
        matrix.push_back(vec);
        vec.clear();
    }
    cout << toString(&matrix);
    return 0;


}
/*
double det(vector<vector<double>> *matrix)
{
    return NULL;
}

vector<vector<double>> minor(vector<vector<double>> *matrix)
{
    return new ;
}*/

static string toString(vector<vector<double>>& matrix)
{
    stringstream ans;
    double temp;
    ans << "Matrix:" << endl;
    for(int i = 0; i < *matrix.size(); i++)
    {
        for(int j = 0; j < *matrix[i].size(); j++)
        {
            ans << *matrix[i][j] << ' ';
        }
        ans << endl;
    }
    return ans.str();
}

