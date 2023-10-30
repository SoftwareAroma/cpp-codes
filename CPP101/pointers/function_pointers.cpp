#include <iostream>

using namespace std;

int getNumber(){
    return 5;
}

int add(int a, int b){
    return a + b;
}

int FunctionPointers() {
    int(*p)() = getNumber;
    cout << p() << endl;

    int (*p2)(int, int) = add;
    cout << p2(3, 3) << endl;
    return 0;
}


