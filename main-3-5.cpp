#include <iostream>
double sum_even(double array[], int n);

int main(){
    int n = 5;
    double array[5] = {1,2,3,4,5};

    double result = sum_even(array, n);

    std::cout << result;

    return 0;
}