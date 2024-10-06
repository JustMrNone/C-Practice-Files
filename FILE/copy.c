#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char x[10];
    scanf_s("%9s", x, sizeof(x));
    char *y = malloc(strlen(x) + 1);
    if(y == NULL)
        return 1;

    for(int i = 0, n = strlen(x); i <= n; i++)
        y[i] = x[i];
    
    x[0] = toupper(x[0]);
    printf("%s\n", x);
    printf("%s\n", y);

    free(y);
    return 0;

}