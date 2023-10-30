#include <iostream>

using namespace std;


int MultiDimensionalArrays() {
    int rows, cols;
    cout << "Enter rows and columns : ";
    cin >> rows >> cols;
    cout << endl;

    int ** table = new int*[rows];
    for(int i = 0; i<rows; i++){
        table[i] = new int[cols];
    }

    table[0][0] = 44;

    cout << table[0][0] << endl;

    // de-allocating memory
    for(int i = 0; i<rows; i++){
        delete[] table[i];
    }

    delete [] table;
    table = NULL;

    return 0;
}


