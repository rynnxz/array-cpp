#include <iostream>
using namespace std;

int main() {
    int array2D[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    cout << "Array 2 Dimensi:" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << array2D[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}