#include <iostream>

using namespace std;

int LambdaFunction() {
    // lambda function
    auto f = [](int x, int y) { return x + y; };
    cout << f(1, 2) << endl;
    return 0;
}
