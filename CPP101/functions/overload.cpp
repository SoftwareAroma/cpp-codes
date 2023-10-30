#include <iostream>

using namespace std;

int sum(int a, int b);
double sum(int a, double b);
double sum(double a, int b);
double sum(double a, double b);

int FunctionOverload() {
    cout << sum(6, 6) << endl;
    cout << sum(6.67, 6.6) << endl;
    cout << sum(6, 6.6) << endl;
    cout << sum(6.00, 6.00) << endl;
    cout << sum(12.00, 6) << endl;
    return 0;
}

int sum(int a, int b){
    return a + b;
}

double sum(double a, int b){
    return a + b;
}

double sum(int a, double b){
    return a + b;
}

double sum(double a, double b){
    return a + b;
}