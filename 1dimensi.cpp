#include <iostream>
using namespace std;

int main() {
    int array1D[5] = {1, 2, 3, 4, 5};

    cout << "Array 1 Dimensi:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << array1D[i] << " ";
    }
    cout << endl;

    return 0;
}