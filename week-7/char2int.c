#include <stdio.h>
#include <math.h>

// function to turn char numerical value to int
// i.e '2' -> 2
int char2int(char c){
    return c - '0';
}

// function which turn string to int
// i.e "2026" -> 2026

int str2int(char c[]) {
    int len = 0;
    int num = 0;
    int count = 0;

    while (c[len] != '\0') {
        len++;
    }

    while (c[count] != '\0') {
        num += char2int(c[count]) * (int)pow(10, len - 1 - count);
        // here (int)... turns float to int on the way (type casting)
        count++;
    }
    return num;
}

int main(){
    int a = char2int('2');
    printf("%d\n", a);

    char x[] = "2026";
    int b = str2int(x);

    printf("%d\n", b);
    return 0;
}