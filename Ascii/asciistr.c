#include <stdio.h>
#include <string.h>

int main()
{
    char string[10];
    int len = sizeof(string) / sizeof(string[0]);
    scanf("%s", &string);
    for(int i = 0; i < len; i++)
    {
        printf("%d ", string[i]);
    }
    printf("\n");

}