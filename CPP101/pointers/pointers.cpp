#include <iostream>

using namespace std;

int Pointers() {
    /*
     * pointers holds address of variables of the same type
     * pointers are declared with * operator
     * pointers are initialized with address of a variable
     * pointers are de-referenced with * operator
     * pointers are used to pass by reference
     * pointers are used to dynamically allocate memory
     *
     * */
    int n = 5;
    cout << "N : " << n << endl;
    cout << &n << endl;
    int* ptr = &n;
    cout << ptr << endl;
    // de-referencing
    cout << *ptr << endl;
    *ptr = 10;
    cout << "N : " << n << endl;
    return 0;
}


