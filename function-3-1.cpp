#include <iostream>

bool is_fanarray(int array[], int n){
int half = n/2;
if (n < 1)
{
    return false;
}else{
for (int i = 0; i < half; i++)
{
   if (array[i+1] < array[i]){
    return false;
   } 
   if (array[i] != array[n-i-1]){
    return false;
   }
}
return true;
}
}