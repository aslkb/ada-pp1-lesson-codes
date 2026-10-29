#include <stdio.h>
#include "prototypes.h" // as our lib is local, not a system lib, we use "" instead of <>

int main(void) {

    int scores[MAX_SCORES] = {72, 85, 64, 90, 58, 77};

    int n = 6;

    print_scores(scores, n);

    printf("highest: %d\n", highest(scores, n));

    printf("average: %.2f\n", average(scores, n));

    printf("amount of scores > 70: %d\n", count_above(scores, n, 70));
    return 0;

}