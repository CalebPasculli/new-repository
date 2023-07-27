#include <iostream>

bool is_ascending(int array[], int n){
int two = 0, five = 0, nine = 0;
if (n < 1)
{
    return false;
}else{
for (int i = 1; i < n; i++)
{
   if (array[i] < array[i-1]){
    return false;
   } 
}
return true;
}
}