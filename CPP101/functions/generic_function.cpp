#include <iostream>

using namespace std;

//template <class T>
template <typename T>
void Swap(T& a, T& b){
    T temp = a;
    a = b;
    b = temp;
}

int GenericFunction() {
    int a = 5, b = 7;
    cout << a << " - " << b << endl;
    Swap(a, b);
    cout << a << " - " << b << endl;
    char c = 'a', d = 'b';
    cout << c << " - " << d << endl;
    Swap(c, d);
    cout << c << " - " << d << endl;
    return 0;
}


