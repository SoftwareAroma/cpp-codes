#include <iostream>
#include <memory>

using namespace std;

class MyClass{
public:
    MyClass(){
        cout << "MyClass constructor" << endl;
    }
    ~MyClass(){
        cout << "MyClass destructor" << endl;
    }

};

int SmartPointers() {
    unique_ptr<int> ptrNum = make_unique<int>(10);
    // unique pointer
    unique_ptr<MyClass> ptr1 = make_unique<MyClass>();
    // shared pointer
    shared_ptr<MyClass> ptr2 = make_shared<MyClass>();
    cout << ptr2.use_count() << endl;
    {
        shared_ptr<MyClass> ptr3 = ptr2;
        cout << ptr2.use_count() << endl;
    }
    cout << ptr2.use_count() << endl;
    return 0;
}


