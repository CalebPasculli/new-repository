#include <iostream>
extern double array_mean(int array[], int n);

int main(){
int n = 3;
int array[n] = {5,2,3};

double result;
result = array_mean(array, n);

std::cout << result; 
std::cout << "\n";
return 0;
}