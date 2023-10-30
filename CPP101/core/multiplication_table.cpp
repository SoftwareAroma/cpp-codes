#include <iostream>

using namespace std;

int MultiplicationTable() {
    int outer = 12, inner = 12;
    for(int i = 1; i <= outer; i++){
        for(int j=1; j <= inner; j++){
            int answer = i * j;
            cout << i << " X " << j << " = " << answer << endl;
        }
        cout << endl;
    }
    return 0;
}

