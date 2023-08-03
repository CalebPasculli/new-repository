#include <iostream>
int main(){

extern int sum_if_palindrome(int integers[], int length);
int n = 6;
int array[n] = {1,0,0,0,0,1};

int result = sum_if_palindrome(array, n);

std::cout << result;

return 0;
}