#include <iostream>

int main() {
extern int transform(int num_array[], int n, int base);

int n = 8, base = 2;
int num_array[n] = {0,0,0,0,1,0,1,1};


int result = transform(num_array, n, base);


std::cout << result << "\n";


return 0;
}