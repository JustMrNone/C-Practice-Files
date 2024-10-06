#include <stdio.h>
void swap(int *a, int *b);
int main()
{
    int x = 5;
    int y = 10;
    printf("%d %d\n", x, y);
    swap(&x, &y);
    printf("%d %d\n", x, y);
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}