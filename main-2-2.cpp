#include <iostream>
extern int max_element(int array[], int n);

int main(){
    int n = 5;
    int array[n] = {1, -5, 10, 100, 5};

    int result = max_element(array, n);

    std::cout << result;
    std::cout << "\n";

    return 0;
}