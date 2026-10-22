#include <stdio.h>
#include <string.h>

// HW

int main(void) {
    char name[20];

    strcpy(name, "Leylaaaaahjjg");
    printf("%s\n", name); // name = Leylaaaaahjjg

    strcpy(name, "Murad");
    printf("%s\n", name); // name = Murad
    printf("%c\n", name[9]); // name[9] = h

    // let you try to guess what would be the answer if we enter yes
    char answer[10];

    printf("Continue? ");
    scanf("%9s", answer);

    if (answer == "yes") printf("Ok\n"); 
    else printf("No\n");
    // and... answer is no
    // see string-h.c, we explained that for comparing strings we have
    // strstr (strcmp) function for that
    
    // proper version:
    printf("Continue? ");
    scanf("%9s", answer);

    if (strcmp(answer, "yes") == 0) printf("Ok"); 
    
    // yeah, yeah, i know you will all ask
    // from which times 0 is true?!
    // well, it goes down to ASCII table
    // it takes and compares EACH char's ASCII val and yea
    // if comp gives 0 then they are equal, any other val - not equal\

    else printf("No");

    return 0;
}

