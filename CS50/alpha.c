#include <stdio.h>
#include <string.h>


int main()
{
    char string[26];
    scanf("%s", string);
    int h = strlen(string);
    int isalpha = 1;

    for (int i = 0; i < h - 1; i++)
    {
        if(string[i] > string[i + 1])
        {
            printf("not in alphabetical");
            isalpha = 0;
            break;
        }
    }
    if (isalpha)
    {
        printf("it is indeed in alphabetical order");
    }

}