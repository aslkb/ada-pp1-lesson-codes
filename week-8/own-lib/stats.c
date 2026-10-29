// in this file we write logic of the functions
// defined at prototypes.h

// it is like making func prototype and then somewhere in code write its logic
// see week-4/func-prototype.c 

#include <stdio.h>


int highest(int a[], int n) {
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;

}

double average(int a[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum / n;
}


void print_scores(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int count_above(int a[], int n, int limit){
    int counter = 0;
    for (int i = 0; i < n; i++){
        if (a[i] > limit) counter++;
    }
    return counter;
}