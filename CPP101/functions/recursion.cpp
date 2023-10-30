#include <iostream>

using namespace std;

int recursive_sum(int m, int n);
int recursive_factorial(int number);

int RecursionFunction() {
    // sum numbers between m and n
    int m = 1, n = 4;

    cout << "Sum of numbers between " << m << " and " << n << " is " << recursive_sum(m, n) << endl;
    cout << recursive_factorial(5) << endl;
    return 0;
}

int recursive_factorial(int number){
    if(number == 1){
        return 1;
    }
    return number * recursive_factorial(number - 1);
}


int recursive_sum(int m, int n) {
    // base case
    if (m == n){
        return m;
    }
    return m + recursive_sum(m+1, n);
}

