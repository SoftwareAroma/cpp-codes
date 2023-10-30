#include <iostream>
#include <iomanip>

using namespace std;

int Rectangle() {
    int height, width;
    char symbol;
    cout << "Height : ";
    cin >> height;
    cout << "Width : ";
    cin >> width;

    cout << "Symbol : ";
    cin >> symbol;
    cout << endl;

    for(int i = 0; i < height; i++){
        for(int k = 0; k < width; k++){
            cout << setw(3) << symbol;
        }
        cout << endl;
    }
    return 0;
}

