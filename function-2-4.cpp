#include <iostream>
#include <string>
#include <cmath>
int sum_min_max(int integers[], int length){
    extern int array_min(int integers[], int length);
    extern int array_max(int integers[], int length);
    int result;
if (length < 1)
{
    return -1;
}else{
    result = array_min(integers, length) + array_max(integers, length);
}
return(result);
}


int array_min(int integers[], int length){


    int min = integers[0];
    for (int i = 0; i < length; i++){
        if (integers[i] < min)
        {
            min = integers[i];
        }
    }

    return (min);
}


int array_max(int integers[], int length){
int max = integers[0];
    for (int i = 0; i < length; i++){
        if (integers[i] > max)
        {
            max = integers[i];
        }
    }

    return (max);
}