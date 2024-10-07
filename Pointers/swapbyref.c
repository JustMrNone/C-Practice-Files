#include <stdio.h>

void swap(int *a, int *b);

int main()
{
    int x;
    int y;
    scanf_s("%i", &x);
    scanf_s("%i", &y);
    printf("%i %i\n", x, y);
    swap(&x, &y);
    printf("%i %i", x, y);
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}