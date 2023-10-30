#include <iostream>

using namespace std;

void introduceMe(const string& name);

int Arguments() {
    introduceMe("Musah");
    introduceMe("Ibrahim");
    return 0;
}

void introduceMe(const string& name){
    cout << "My name is " << name << endl;
}
