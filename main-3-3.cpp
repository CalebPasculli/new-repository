#include <iostream>
extern double weighted_average(int array[], int n);

int main(){
    int n = 6;
    int array[n] = {1, 2, 1, 4, 1, 3};

    double result = weighted_average(array, n);

    std::cout << result << "\n";

    return 0;
}