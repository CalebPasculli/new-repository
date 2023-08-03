#include <iostream>
#include <string>
#include <cmath>
int sum_if_palindrome(int integers[], int length){
    extern bool is_palindrome(int integers[], int length);
    extern int sum_array(int integers[], int length);
if (length < 1)
{
    return -1;
}else{
    if (is_palindrome(integers, length) == true)
    {
        int result = sum_array(integers, length);
        return(result);
    }else{
        return(-2);
    }
}
}

bool is_palindrome(int integers[], int length){

    int len = length/2;

    for (int i = 0; i < len; i++){
        if (integers[i] == integers[length - i - 1 ])
        {

        }else{
            return false;
        }
    }

    return true;
}


int sum_array(int integers[], int length){

int sum = 0;

for (int i = 0; i < length; i++){
    sum += integers[i];
}
return(sum);
}