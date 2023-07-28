#include <iostream>

double weighted_average(int array[], int n){

if (n < 1)
{
    return 0;
}else{

double average;
for (int j = 0; j < n; j++){
    double count = 0;
    for (int k = 0; k < n; k++){
    if (array[j] == array[k]){
        count++;
    }
}
double val = array[j];
average += val * count / n;
}
return(average);
}

}
