#include <iostream>

using namespace std;

bool primeNumber(int number);

int ReturnType() {
    for(int i = 1; i < 100; i++){
        bool isPrime = primeNumber(i);
        if(isPrime){
            cout << i << " is Prime" << endl;
        }
    }

    return 0;
}

bool primeNumber(int number){
    if(number <= 1){
        return false;
    }
    for(int i = 2; i<number; i++){
        if(number % i == 0){
            return false;
        }
    }
    return true;
}

