#include <iostream>

using namespace std;

// using template to solve the void pointer problem
template<typename T>
void printer(T *t){
    cout << *t << endl;
}

// void pointers are used to store the address of any type of variable
void print(void* ptr, char type){
    switch (type) {
        case 'i':
            cout << *(int*)ptr << endl;
            break;
        case 'f':
            cout << *(float*)ptr << endl;
            break;
        case 'c':
            cout << *(char*)ptr << endl;
            break;
        default:
            cout << "Unknown type" << endl;
            break;
    }
}

int VoidPointers() {
    int n = 5;
    int* ptr = &n;
    *ptr = 10;
    print(ptr, 'i');
//    printer(ptr); // using templates to avoid boilerplate code
    return 0;
}


