double array_mean(int array[], int n){
if (n < 1)
{
    return 0;
}else{
    int avg = 0;
for (int i = 0; i < n; i++)
{
    avg += array[i];
}
avg = avg/n;
return avg;
}

}