#include <iostream>

using namespace std;

class SmartPhone {
public:
    virtual void takeSelfie() = 0;

    virtual void makeCall() = 0;
};

class Android : public SmartPhone {
public:
    void takeSelfie() {
        cout << "Taking selfie with Android" << endl;
    }

    void makeCall() {
        cout << "Making call with Android" << endl;
    }
};

class Iphone : public SmartPhone {
public:
    void takeSelfie() {
        cout << "Taking selfie with Iphone" << endl;
    }

    void makeCall() {
        cout << "Making call with Iphone" << endl;
    }
};

int Abstraction() {

    SmartPhone *androidPhone = new Android();
    SmartPhone *iPhone = new Iphone();
    androidPhone->takeSelfie();
    iPhone->takeSelfie();
    iPhone->makeCall();
    return 0;
}


