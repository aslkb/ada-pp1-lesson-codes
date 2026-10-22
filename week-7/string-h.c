#include <stdio.h>
#include <string.h>

// meet new library for built-in commands for str - <string.h>!

// strcpy manually
void strcopy_new(char old[], char new[]){
    for (int i = 0; old[i] != '\0'; i++) new[i] = old[i];
    printf(new);
}

int main(){
    char name[] = "Smith";
    char student[20];
    strcopy_new(name, student);
    
    // strcopy - for copying value from one variable to another
    char source[] = "C Programming";
    char destination[20];
    strcpy(destination, source);
    printf("strcpy result: %s\n", destination);

    // strcat - append two strings into one
    // Appends "World!" to "Hello, "
    char greeting[30] = "Hello, ";
    char text[] = "World!";

    strcat(greeting, text);
    printf("Concatenated: %s\n", greeting);
    
    // strcmp - compare two strings
    char str1[] = "apple";
    char str2[] = "apple";
    char str3[] = "banana";

    if (strcmp(str1, str2) == 0) printf("str1 and str2 are equal\n");

    if (strcmp(str1, str3) != 0) printf("str1 and str3 are NOT equal\n");

    // strcht - Find a character in a string
    char *charPtr = strchr(text, 'd');
    if (charPtr != NULL) {
        printf("Found character starting at: %s\n", charPtr);
    }

    // strstr - Find a substring
    char *subPtr = strstr(text, "ld");
    if (subPtr != NULL) {
        printf("Found substring starting at: %s\n", subPtr);
    }
}