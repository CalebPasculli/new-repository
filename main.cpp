#include <iostream>
#include "workshop.h"

int main(){


int n = 4;
double M = 2;
double * result = dynamicArray(n,M);

printArray(result, n);

double max = arrayMax(result, n);

std::cout << max;

delete[] result;

}