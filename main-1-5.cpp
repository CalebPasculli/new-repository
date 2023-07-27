#include <iostream>
extern int count_evens(int number);

int main(){
int number = 10;

int result;
result = count_evens(number);

std::cout << result; 
std::cout << "\n";
return 0;
}