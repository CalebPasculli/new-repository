#include <iostream>
extern int num_count(int array[], int n, int number);

int main(){
int n = 3;
int array[n] = {1,1,1};
int number = 2;

double result;
result = num_count(array, n, number);

std::cout << result; 
std::cout << "\n";
return 0;
}