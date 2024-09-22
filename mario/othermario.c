#include <stdio.h>

void printpri(int lenght, int spaces);

int main(void)
{
    int num;
    scanf("%i", &num);

    for(int i = 0; i < num; i++)
    {
        printpri(i, num - i);
        printf("\n");
    }

}


void printpri(int lenght, int spaces)
{
    for(int i = 1; i < spaces; i++)
    {
        printf(" ");
    }
    for(int j = 0; j < lenght; j++)
    {
        printf("#");
    }
    for(int k = 0; k < lenght; k++)
    {
        printf("#");
    }
}