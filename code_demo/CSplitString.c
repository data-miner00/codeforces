#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char string[30];
    printf("Enter a string: ");
    gets(string);
    char *p = strtok(string, " ");
    while(p) {
        printf("%s\n", p);
        p = strtok(NULL, " ");
    }
    return 0;
}