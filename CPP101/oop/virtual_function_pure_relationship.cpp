#include <iostream>

using namespace std;

class Instrument{
public:
    // can be override if need be
    virtual void Name(){
        cout << "Instrument" << endl;
    }

    // pure virtual function (must be overridden by derived classes)
    virtual void MakeSound() = 0;
};

class Accordion: public Instrument{
public:
    void MakeSound(){
        cout << "According Playing..." << endl;
    }
};

class Piano: public Instrument{
public:
    void MakeSound(){
        cout << "Piano playing..." << endl;
    }
};

int PureVirtualFunction() {
    Instrument * accordion = new Accordion();
    accordion->MakeSound();
    Instrument * piano = new Piano();
    piano->MakeSound();

    Instrument * instruments[2] = {accordion, piano};
    for(int i = 0; i < 2; i++){
        instruments[i]->MakeSound();
    }

    return 0;
}


