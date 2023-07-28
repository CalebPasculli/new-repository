#include <iostream>
extern int median_array(int array[], int n);

int main(){
    int n = 5;
    int array[n] = {5, 4, 3, 2, 1};

    int result = median_array(array, n);

    std::cout << result << "\n";

    return 0;
}