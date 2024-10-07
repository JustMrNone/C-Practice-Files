#include <stdio.h>
#define RANGE 10


void incre(int *arr);
void decre(int *arr);
int main()
{
    int a[RANGE];
    for(int i = 0; i < RANGE; i++)
        a[i] = i;
    
    for(int i = 0; i < RANGE; i++)
        printf("%i", a[i]);

    incre(a);    
    printf("\n");
    for(int i = 0; i < RANGE; i++)
        printf("%i", a[i]);
    decre(a);
    decre(a);
    printf("\n");
    for(int i = 0; i < RANGE; i++)
        printf("%i", a[i]);
    
}
void incre(int *arr)
{
    for(int i = 0; i < RANGE; i++)
        arr[i]++;
}
void decre(int *arr)
{
    for(int i = 0; i < RANGE; i++)
        arr[i]--;
}