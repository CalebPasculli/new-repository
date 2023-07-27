#include <iostream>
#include "function-1-2.cpp"

int main(){
int n = 3;
int array[n] = {1,2,3};

double result;
result = array_mean(array, n);

std::cout << result; 
std::cout << "\n";
return 0;
}