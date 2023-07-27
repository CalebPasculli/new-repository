#include <iostream>
#include "function-1-1.cpp"

int main(){

int array[3] = {1,1,1};
int n = 3;
int ans = array_sum(array, n);


std::cout << ans; 
std::cout << "\n";
return 0;
}