#include <iostream>
int main(){

extern int binary_to_int(int binary_digits[], int number_of_digits);
int n = 6;
int array[n] = {1,0,0,1,1,1};

int result = binary_to_int(array, n);

std::cout << result;

return 0;
}