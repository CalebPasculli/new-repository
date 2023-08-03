#include <iostream>

int main(){

extern int is_identity(int array[10][10]);

int array[10][10] = {0};

for (int i = 0; i < 10; i++){
    array[i][i] = 2;
}

int result = is_identity(array);
std::cout << result;




    return 0;
}