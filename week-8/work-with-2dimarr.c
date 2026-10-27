# include <stdio.h> 

# define COLS 3
# define ROWS 4

// function to find largest in all array (not only largest in each sub-array's)
int LAAARGEST(int array[COLS][ROWS]){
    int largest = array[0][0];
    for (int i = 0; i < COLS; i++){
        for (int j = 0; j < ROWS; j++){
            if (array[i][j] > largest) largest = array[i][j];
        }
    }
    return largest;
}

int main(){

    int count = 0;
    int twodimarr [COLS][ROWS] = {
        {3, 5, 8 ,4},
        {2, 6, 9 ,1},
        {-1, 0, 4, 2}
    };
    
    // find values lower than 0:
    for (int i = 0; i < COLS; i++){
        for (int j = 0; j < ROWS; j++){
            if (twodimarr[i][j] < 0) count++;
        }
    }
    printf("amount of nums lower than 0 is: %d\n", count);

    // largest in each sub-array
    int largest = twodimarr[0][0];
    for (int i = 0; i < COLS; i++){
        for (int j = 0; j < ROWS; j++){
            if (twodimarr[i][j] > largest) largest = twodimarr[i][j];
        }
        printf("%d ", largest);
        largest = twodimarr[i][0];
    }

    int z = LAAARGEST(twodimarr);
    printf("\nLAAARGEST IN AAALL ARRAY IS: %d", z);

    // to change values sequentially:
    for (int i = 0; i < COLS; i++){
        for (int j = 0; j < ROWS; j++){
            printf("\nenter value for [%d][%d]: ", i,j);
            scanf("%d", &twodimarr[i][j]);
        }
    }

    printf("\nnew array values:");

    for (int i = 0; i < COLS; i++){
        for (int j = 0; j < ROWS; j++){
            printf("twodimarr [%d][%d]: %d", i,j,twodimarr[i][j]);
        }
    }

    
}