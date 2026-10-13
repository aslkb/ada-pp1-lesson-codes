// basic program to find max value in array 
#include <stdio.h>
#define N 5

void minimal(int len, int array[]){
    int mini = array[0];
    for (int z = 0; z < N; z++){
        if (array[z] < mini) mini = array[z];
    }
    printf("max num in variable is = %d\n", mini);
}

int main(){
    int a[N] = {5,3,8,8,2};

    // max finder
    int max = 0;
    for (int i = 0; i < N; i++){
        if (a[i] > max){
            max = a[i];
        }
    }
    printf("max num in variable is = %d\n", max);

    // min finder
    // in this case we define min as 1st element of array, as if we would define to 0
    // it is possible that it wouldnt work properly
    int min = a[0];
    for (int r = 0; r < N; r++){
        if (a[r] < min) min = a[r];
    }
    printf("max num in variable is = %d\n", min);

    minimal(N, a);
    return 0;
}