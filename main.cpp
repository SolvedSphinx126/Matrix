#include "Matrix.h"
using namespace std;





int main() {
    Matrix *arr = new Matrix();
    arr->query();
    cout << arr->toString();
    Matrix *min = new Matrix(arr->minor(1,1));
    min->scaleCol(2,1.0/3.0);
    cout << min->toString() << min->det() << endl;
    return 0;


}