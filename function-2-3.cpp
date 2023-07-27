#include <iostream>

void two_five_nine(int array[], int n){
int two = 0, five = 0, nine = 0;
if (n < 1)
{
    std::cout << 0;
}else{
for (int i = 0; i < n; i++)
{
   if (array[i] == 2){
    two++;
   } else if (array[i] == 5){
    five++;
   } else if (array[i] == 9){
    nine++;
   }
}

}
std::cout << "2:" << two << ";" <<"5:" << five << ";" << "9:" << nine << ";\n";
}