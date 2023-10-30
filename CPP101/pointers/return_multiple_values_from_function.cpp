#include <iostream>

using namespace std;

int getMin(int array[], int size){
    int min = array[0];
    for(int i = 1; i < size; i++){
        if(array[i] < min){
            min = array[i];
        }
    }
    return min;
}

int getMax(int array[], int size){
    int max = array[0];
    for(int i = 1; i < size; i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    return max;
}

void getMinAndMax(int array[], int size, int *min, int *max){
    for(int i = 1; i < size; i++){
        if(array[i] < *min){
            *min = array[i];
        }
        if(array[i] > *max){
            *max = array[i];
        }
    }
}

int MultipleReturns() {
    int numbers[5] = {4, 2, -4, 28, 8};
    int min = numbers[0];
    int max = numbers[0];
    int * maxPtr = &max;
    int * minPtr = &min;
    cout << getMin(numbers, 5) << endl;
    cout << getMax(numbers, 5) << endl;
    getMinAndMax(numbers, 5, minPtr, maxPtr);
    cout << "Min = " << min << " Max = " << max << endl;
    return 0;
}


