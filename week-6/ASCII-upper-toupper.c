#include <stdio.h>

// as ASCII values from 65 to 90 represent upper chars
// we take char, extract its ASCII val in var int a
// and check
void cisupper(char c){
    int a = c + 0;
    if (65 <= a <= 90) printf("ur char is upper!");
    else printf("ur char uis lower!");
}

// here we check is our char lower
// if yes we extract 32 from upper char value
// and get lower char value
// and then print lower char itself
void ctoupper(char c){
    int a = c + 0;
    if (97 <= a <= 122) a = a-32;
    printf("\nur upper char is: %c", a);
}
int main(){
    cisupper(66);
    ctoupper(98);
}