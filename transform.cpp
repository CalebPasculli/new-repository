#include <cmath>
#include <iostream>
int transform(int num_array[], int n, int base) {

int result = 0;

result = num_array[0] * pow(-2,n-1);

for (int i = 1; i < n; i++){
    result += num_array[i] * pow(2, n-1-i);
}


return(result);
}

int main() {
extern int transform(int num_array[], int n, int base);

int n = 4, base = 2;
int num_array[n] = {1,1,1,1};


int result = transform(num_array, n, base);


std::cout << result << "\n";


return 0;
}