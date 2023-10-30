#include <iostream>

using namespace std;

int Arrays() {
    const int size = 12;
    int monthsArray[size] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int total = 0;
    for (int i = 0; i < size; i++) {
        cout << "Month " << i + 1 << " has " << monthsArray[i] << " days." << endl;
        total += monthsArray[i];
    }
    int average = total / size;
    cout << "Average amount days month: " << average << endl;
    return 0;
}


