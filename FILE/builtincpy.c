#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main()
{
    char x[10];
    scanf_s("%9s", x, sizeof(x));

    char *y = malloc(strlen(x) + 1);
    if(y == NULL)
        return 0;
    //this prevents overflow, the second argument is the source size 
    strcpy_s(y, strlen(x) + 1, x);

    x[0] = toupper(x[0]);

    printf("%s\n", x);
    printf("%s\n", y);

    free(y);
    return 0;   
}