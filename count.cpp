#include <iostream>

int count(int array[], int n){
    int numEven = 0;
    for (size_t i = 0; i < n; i++)
    {
       if (array[i] % 2 == 0)
       {
        numEven++;
       }
       
    }
    return(numEven);
}