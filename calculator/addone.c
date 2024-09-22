#include <stdio.h>
#include <string.h>

int main()
{
    int ints[1024];
    for (int i = 0; i < 100; i++)
    {
        ints[i] = i;
    }
    for (int j = 0; j < 100; j++)
    {
        printf("%i", ints[j]);
    }

}