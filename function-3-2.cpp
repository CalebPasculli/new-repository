#include <iostream>

int median_array(int array[], int n){

bool state = false;
if (n < 1 || n % 2 == 0)
{
    return 0;
}else{
while (state != true){
    for (int i = 0; i < n-1; i++){
    int temp;
    if (array[i] > array[i+1]){
        temp = array[i+1];
        array[i+1] = array[i];
        array[i] = temp;
    }
    
   } 
    int ordered_count = 0;
   for (int i = 0; i < n-1; i++){
        
        if (array[i] <= array[i+1]){
            ordered_count++;
        }
        if (ordered_count == n-1){
            state = true;
        }
    }


}
if (n % 2 != 0){
    int half = n/2;
    int median = array[half];
    return(median);
}
}
}

