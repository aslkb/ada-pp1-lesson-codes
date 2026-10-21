// ASCII Values of char

#include <stdio.h>

int main(){
    char num = '4';
    printf("num is: %c\n%d\n", num, num);

    // you think that it will print num is: "4" (as char) 4 (as int)?
    // or give a datatype error?
    // *drum plays* aaaand you are... WRONG! :(

    // it would print 4 and 52
    // "what is 52 doing here?!" - most prob you ask

    // well, there is wonderful thing called 
    // ASCII table
    // basically it's a table with BIN/DEC codes of basic 128 symbols

    // btw with that ASCII value you can do math! as ASCII value is just a DEC
    
    char grade = 'A'; // ASCII = 65
    char sm_a = 'a'; // ASCII = 97
    printf("A-a = %d", grade-sm_a);
}