#include <iostream>

void printArray(double* array, int n){
    for (int i = 0; i < n; i++){
        std::cout << array[i] << " ";
    }
    std::cout <<"\n";
}


void changeValue(double* num){
    *num = 42.0;
}


double arrayMax(double* array, int n){
    double max = *array;
    for (int i = 0; i < n; i++){
        if (array[i] > max)
        {
            max = array[i];
        }
        
    }
    return(max);
}

double* dynamicArray(int n, double M){

double * ptr = new double[n];

for (int i = 0; i < n; i++){
        ptr[i] = M;
    }

return ptr;
}