#include <stdio.h>
#include <string.h>

int main(){
    char str1[20] = "Hello";
    printf("%lu\n", sizeof(str1) / sizeof(str1[0]));
    printf("%d\n", strlen(str1));
    char str2[] = " World!";
    strcat(str1, str2);
    printf("%lu\n", sizeof(str1) / sizeof(str1[0]));
    printf("%d\n", strlen(str1));
    return 0;
}
