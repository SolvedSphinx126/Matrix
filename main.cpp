#include "Matrix.h"
using namespace std;





int main() {
    Matrix *arr = new Matrix();
    arr->query();
    cout << arr->toString();
    Matrix min = *arr->minor(2,2);
    cout << min.toString();
    return 0;


}