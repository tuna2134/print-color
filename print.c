#include <stdio.h>

int printcolor(char word, char color){
    if (strcmp(color, "black") == 0)
    {
        printf("\x1b[40m");
    }
    else if(strcmp(color, "red") == 0)
    {
        printf("\x1b[41m");
    }
    printf(word);
    return 0;
}
