#include <iostream>

int main(){

extern void count_digits(int array[4][4]);

int array[4][4] = {0};

array[1][2] = 9;

count_digits(array);

return 0;
}