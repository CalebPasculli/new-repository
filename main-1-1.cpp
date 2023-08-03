#include <iostream>

int main(){

extern int sum_diagonal(int array[4][4]);

int array[4][4] = {
    {1,1,1,1}, 
    {1,1,1,1}, 
    {1,1,1,1}, 
    {1,1,1,1}
};


int result = sum_diagonal(array);
std::cout << result;




    return 0;
}