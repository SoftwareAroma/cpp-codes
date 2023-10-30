#include <iostream>

using namespace std;

void DrawTriangle(int size = 5){
    for(int i = 0; i < size; i++){
        for(int k = 0; k < i+1; k++){
            cout << " *";
        }
        cout << endl;
    }
}

void FlippedTriangle(){
    int size = 5;
    for(int i = size; i > 0; i-- ){
        for(int k = 0; k < i; k++){
            cout << " *";
        }
        cout << endl;
    }
}
