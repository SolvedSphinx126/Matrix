#include "Matrix.h"
using namespace std;





int main() {
    Matrix *arr = new Matrix();
    arr->query();
    cout << arr->toString();
    Matrix *min = new Matrix(arr->minor(1,1));
    cout << 1.0/3.0 << endl;
    min->scaleCol(2,1.0/3.0);
    cout << min->toString();
    return 0;


}