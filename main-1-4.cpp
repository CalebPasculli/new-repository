#include <iostream>
#include "function-1-4.cpp"

int main(){
int n = 3;
int array[n] = {1,1,1};
int secondarray[n] = {2,2,2};


int result;
result = sum_two_arrays(array, secondarray, n);

std::cout << result; 
std::cout << "\n";
return 0;
}