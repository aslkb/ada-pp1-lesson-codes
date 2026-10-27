#include <stdio.h>

int main(){
    int twodimarr [3][4] = {
        {0,1,2,3},
        {4,5,6,7},
        {8,9,-1,-2}
    };

    // here [3] means rows (amount of arrays inside our 2-dim array)
    // [4] - columns (amount of elements in each sub-array)
    // to reach some specific value we need to write BOTH values
    // e.g if we want to adress to 7 , we need to write twodimarr[1][3] (2nd sub-array 3rd element of it)

    printf("%d\n", twodimarr[1][3]);

    // i know what yall will ask:
    // why when we define our array we write [3][4] like it goes from 1,...,n
    // but when adress we do as always from 0,...,n-1?
    
    // well, we do that so C compiler would know EXACTLY how many sub-array's and elements we have
    // so it can store right amount of memory

    // loop for calling all val's of our array:
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            printf("twodimarr [%d][%d]: %d\n", i,j,twodimarr[i][j]);
        }
    }

    printf("\n");

    // to change values sequentially:
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            printf("enter value for [%d][%d]: ", i,j);
            scanf("%d", &twodimarr[i][j]);
        }
    }

    printf("\nnew array values:");

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            printf("twodimarr [%d][%d]: %d\n", i,j,twodimarr[i][j]);
        }
    }
}