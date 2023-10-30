#include <iostream>

using namespace std;

int WhileLoop(){
    int counter = 100;
    int endCounter = 500;

    while(counter <= endCounter){
        if(counter % 3 == 0 && counter % 5 == 0){
            cout << counter << " ";
        }
        counter++;
    }
    return 0;
}