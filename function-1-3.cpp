#include <iostream>

void count_digits(int array[4][4]){

    int counts[10] = {0};


    for(int i = 0; i < 10; i++){
         for(int k = 0; k < 4; k++){
            for(int j = 0; j < 4; j++){
                if (array [k][j] == i){
                    counts[i] += 1;
                }
            }
         }
    }


    for (int i = 0; i < 9; i++)
    {
        std::cout << i << ":" << counts[i] << ";";
    }
    std::cout << 9 << ":" << counts[9] << ";" << "\n";

    

}