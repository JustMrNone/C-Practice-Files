#include <stdio.h>

void swap(int *a, int *b);

int main()
{
    int a = 10;
    int b = 50;
    printf("%i %i", a, b);
    swap(&a, &b);
    printf("\n%i %i", a, b);
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}