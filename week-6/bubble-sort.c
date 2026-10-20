// bubble sorting

#include <stdio.h>
#define N 5

int main(){
    int a[N] = {5,4,7,8,2};

    printf("old array is: ");
    for (int j = 0; j < N; j++){
        printf("%d ", a[j]);
    }

    // function of bubble sort
    // outer loop for re-executing inner loop to assure
    // that largest element is in right place
    // inner loop for compare the pairs

    for (int pass = 1; pass < N; pass++){
        for (int i = 0; i < N-pass; i++){
            if (a[i] > a[i+1]){
                int temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }


    printf("\nnew array is: ");
    for (int j = 0; j < N; j++){
        printf("%d ", a[j]);
    }
}