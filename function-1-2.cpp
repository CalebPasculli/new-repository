int is_identity(int array[10][10]){
    
    int identity_array[10][10] = {0};

    for (int i = 0; i < 10; i++){
        identity_array[i][i] = 1;
    }

    int count = 0;

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if (array [i][j] == identity_array [i][j]){
                count++;
            }
        }
    }
    int result;
    if (count == 100){
        result = 1;
    }else{
        result = 0;
    }
    return result;
}