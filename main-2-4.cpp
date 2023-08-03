#include <iostream>
int main(){

extern int sum_min_max(int integers[], int length);
int n = 6;
int array[n] = {2,0,0,0,0,1};

int result = sum_min_max(array, n);

std::cout << result;

return 0;
}