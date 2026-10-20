#include <stdio.h>

// you can define variable value like that:
# define N 5
// this is a global varable!
// but this var is not stored in memory, dont have a data type, and it cannot be changed

int main(){
    int a[N] = {5,3,8,8,2};

    int target = 8;
    int count = 0;

    for (int i = 0; i < N; i++){
        if (a[i] == target){
            count++;
        }
    }
    printf("count = %d\n", count);
}