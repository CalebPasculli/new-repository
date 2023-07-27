#include <iostream>
#include "function-2-4.cpp"

int main(){
    int n = 5;
    int array[n] = {2, 2, 5, 1, 9};

    bool result = is_ascending(array, n);

    std::cout << result << "\n";

    return 0;
}