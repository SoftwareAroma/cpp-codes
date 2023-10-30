#include <iostream>

using namespace std;


int main() {
    int size = 5;

    for(int i = 0; i < size; i++){
        for(int k = 0; k < i+1; k++){
            cout << " *";
        }
        cout << endl;
    }
    cout << endl;
    for(int i = size; i > 0; i--){
        for (int k = 0; k < i-1; k++){
            cout << " *";
        }
        cout << endl;
    }
    return 0;
}
