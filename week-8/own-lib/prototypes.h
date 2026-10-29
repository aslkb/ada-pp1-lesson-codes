// making own library and using some commands
// for libs we use .h extension NOT .c one
// .h comes from HEADER, which means that
// in this type file we define function prototypes, type defentions, etc...

#ifndef STATS_H

#define STATS_H

#define MAX_SCORES 10

void print_scores(int a[], int n);

int highest(int a[], int n);

double average(int a[], int n);

int count_above(int a[], int n, int limit);

#endif