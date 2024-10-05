#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p;
    for(int i = 0; i < 10; i++)
    {
        p = &a[i];
        printf("%i is in 0x%p\n\n", *p, (void*)p);
    }

    
}