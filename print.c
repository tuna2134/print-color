#include <stdio.h>

int printc(char word, char color){
    if (strcmp(color, "black") == 0)
    {
        printf("\x1b[40m");
    }
    else if(str(color, "red") == 0)
    {
        printf("\x1b[41m");
    }
    printf(word);
    return 0;
}
