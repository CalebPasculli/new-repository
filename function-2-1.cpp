#include <iostream>
#include <string>
#include <cmath>
void print_binary_str(std::string decimal_number){

int num_array[9] 

= std::stoi(decimal_number);


int result = 0;
int n = 9;

result = num_array[0] * pow(-2,n-1);

for (int i = 1; i < n; i++){
    result += num_array[i] * pow(2, n-1-i);
}
}