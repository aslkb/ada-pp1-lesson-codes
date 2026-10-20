#include <stdio.h>
#include <string.h>

// meet new library for built-in commands for str - <string.h>!

void strcopy_new(char old[], char new[]){
    for (int i = 0; old[i] != '\0'; i++) new[i] = old[i];
    printf(new);
}

int main(){
    char name[] = "Smith";
    char student[20];
    strcopy_new(name, student);
}