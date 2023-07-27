#include <iostream>
extern void two_five_nine(int array[], int n);

int main(){
    int n = 5;
    int array[n] = {2, 2, 5, 9, 9};

    two_five_nine(array, n);
    return 0;
}