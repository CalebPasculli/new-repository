double array_mean(int array[], int n){
if (n < 1)
{
    return 0;
}else{
    double sum = 0;
for (int i = 0; i < n; i++)
{
    sum += array[i];
}
double avg;
avg = sum/n;
return avg;
}

}