#include <iostream>
extern bool is_fanarray(int array[], int n);

int main(){
    int n = 5;
    int array[n] = {1, 2, 1, 2, 1};

    bool result = is_fanarray(array, n);

    std::cout << result << "\n";

    return 0;
}