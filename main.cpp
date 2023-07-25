#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int count(int[], int);

int main() {
    int array1[5] = {4,5,6,7,8};
    std::cout << "The number is: " << count(array1, 5) << std::endl;


    int array2[6] = {1,1,1,1,1,1};
    std::cout << "The number is: " << count(array2, 6) << std::endl;

    int array3[3] = {2,2,2};
    std::cout << "The number is: " << count(array3, 3) << std::endl;

    return 0;
}