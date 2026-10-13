#include <stdio.h>
# define N 5
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