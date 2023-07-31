#include <cmath>
#include <iostream>
int transform(int num_array[], int n, int base) {

int result = 0;

for (int i = 0; i < n; i++){
    result += num_array[7-i] * pow(2, i);
}


return(result);
}

int main() {
extern int transform(int num_array[], int n, int base);

int n = 8, base = 2;
int num_array[n] = {0,0,0,0,1,0,1,1};


int result = transform(num_array, n, base);


std::cout << result << "\n";


return 0;
}