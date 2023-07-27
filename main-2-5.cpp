#include <iostream>
extern bool is_descending(int array[], int n);

int main(){
    int n = 5;
    int array[n] = {5, 4, 3, 2, 5};

    bool result = is_descending(array, n);

    std::cout << result << "\n";

    return 0;
}