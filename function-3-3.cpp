#include <iostream>

double weighted_average(int array[], int n){

bool state = false;
if (n < 1)
{
    return 0;
}else{
double count = 0;
double average;
for (int j = 0; j < n; j++){
    for (int k = 0; k < n; k++){
    if (array[j] == array[k]){
        count++;
    }
}
double val = array[j];
average += val * count / n;
count = 0;
}
return(average);
}

}
