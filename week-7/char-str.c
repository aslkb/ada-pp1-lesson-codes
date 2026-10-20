#include <stdio.h>

// C lacks of string datatype and we improvise by making char array 

int main(){
    // basic example of string
    char word[] = "Hello PP1!";

    // in C it's stored as "Hello PP1!\0"
    // what is \0? you ask most probably
    // well, \0 represent null character
    // we dont see it but our PC does
    // remember this fact!

    printf("%s\n", word);

    // as we said that str is a char array we can print exact chars using their index
    printf("%c %c %c\n", word[0], word[2], word[3]);

    char name[20]; // here 20 is max len of str

    printf("Type your name: ");
    scanf("%s", name); // here we dont use & to adress our scanf to variable, it already knows
    printf("Hello %s!\n", name);

    // basic string len counter
    // you see how we use \0 char to check that we reached to the end of our str?
    // keep in mind when we write \0 we need to write it with single quotes ('\0'), NOT DOUBLE! ("\0")\

    int len = 0;
    while (word[len] != '\0') len++;
    printf("len of our string is: %d", len);
    
}