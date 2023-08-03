#include <iostream>

int main(){

extern void print_scaled(int array[3][3],int scale);

int array[3][3] = {0};
int scale = 2;


print_scaled(array, scale);

return 0;
}