#include <iostream>

using namespace std;

int DoWhileLoop(){
    int userPin = 134, pin, errorCounter = 0;

    do{
        cout << "PIN : ";
        cin >> pin;
        if(pin != userPin){
            errorCounter++;
        }
    } while (errorCounter < 3 && userPin != pin);
    if(errorCounter < 3){
        cout << "Loading..." << endl;
    } else{
        cout << "blocked..." << endl;
    }

    return 0;
}