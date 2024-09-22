#include <stdio.h>

void printcol(int height);

int main()
{
    int h;
    scanf("%i", &h);
    printcol(h);
}

void printcol(int height)
{
    for (int i = 0; i <= height; i++)
    {
        printf("#\n");
    }
}