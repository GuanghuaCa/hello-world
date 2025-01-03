#include <stdio.h>

void main(){
    int c;
    printf("%c\n", EOF);
    while ((c = getchar()) != EOF)
        putchar(c);
}