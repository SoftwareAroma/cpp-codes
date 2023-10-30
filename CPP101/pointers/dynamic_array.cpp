#include <iostream>

using namespace std;


int DynamicArray() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    // dynamic array
    int * arr = new int[size];
    cout << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter the value of the element: ";
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    // memory cleanup
    delete [] arr;
    arr = NULL;
    return 0;
}


