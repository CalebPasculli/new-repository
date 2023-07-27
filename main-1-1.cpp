#include <iostream>

extern int array_sum(int array[], int n);

int main(){

int array[3] = {1,1,1};
int n = 3;
int ans = array_sum(array, n);


std::cout << ans; 
std::cout << "\n";
return 0;
}