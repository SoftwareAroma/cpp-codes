#include <iostream>

using namespace std;

int ArrayNumbers() {
    int numbers[5] = {1, 2, 3, 4, 5};
    cout << numbers << endl; // prints the address of the first item in the array
    cout << &numbers[0] << endl; // confirm the address
    cout << *(numbers + 2) << endl; // de-referencing the pointer
    for(int i = 0; i < 5; i++) {
        cout << *(numbers + i)<< " ";
    }
    cout << endl;
    return 0;
}


