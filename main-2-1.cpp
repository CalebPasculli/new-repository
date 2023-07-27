#include <iostream>
#include "function-2-1.cpp"

int main(){
    int n = 5;
    int array[n] = {1, -5, 10, 100, 5};

    int result = min_element(array, n);

    std::cout << result;
    std::cout << "\n";

    return 0;
}