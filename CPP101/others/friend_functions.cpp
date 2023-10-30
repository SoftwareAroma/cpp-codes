#include <iostream>
#include <math.h>

using namespace std;

class EquilateralTriangle{
private:
    float a;
    float area;
    float circumference;

public:
    void setA(float length){
        this->a = length;
        this->circumference = 3 * length;
        this->area = (sqrt(3) / 4) * (length * length);
    }

    friend void printResults(EquilateralTriangle triangle);
};

void printResults(EquilateralTriangle triangle){
    cout << "Area: " << triangle.area << endl;
    cout << "Circumference: " << triangle.circumference << endl;
}

int Friendship() {
    EquilateralTriangle triangle;
    triangle.setA(5);
    printResults(triangle);
    return 0;
}


