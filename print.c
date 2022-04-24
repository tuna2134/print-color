#include <stdio.h>

int printc(char word, char color){
    if (color == "black")
    {
        printf("\x1b[40m");
    }
    else if(color == "red")
    {
        printf("\x1b[41m");
    }
    printf(word);
    return 0;
}
