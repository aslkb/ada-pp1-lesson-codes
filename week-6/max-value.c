// basic program to find max value in array 
#include <stdio.h>
#define N 5

// minimal value finder as a function

// in this case we define min as 1st element of array,
// as if we would define it to 0, it is possible that our function wouldnt work properly
void minimal(int len, int array[]){
    int mini = array[0];
    for (int z = 0; z < N; z++){
        if (array[z] < mini) mini = array[z];
    }
    printf("min value in array is = %d\n", mini);
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
    printf("max num in array is = %d\n", max);

    // min finder
    int min = a[0];
    for (int r = 0; r < N; r++){
        if (a[r] < min) min = a[r];
    }
    printf("min num in array is = %d\n", min);

    minimal(N, a);
    return 0;
}