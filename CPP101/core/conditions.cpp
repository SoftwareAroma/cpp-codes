#include <iostream>

using namespace  std;

int Conditionals(){
    int number;
    cout << "Enter an integer value :";
    cin >> number;
    cout << endl;
    if(number % 2 == 0){
        cout << "You entered an even number" << endl;
    }else{
        cout << "You entered an odd number" << endl;
    }
    cout << "Thank You. Bye." << endl;

    return 0;
}