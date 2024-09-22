#include <stdio.h>
#include <string.h>


int main()
{
    int list[5];
    int len = sizeof(list) / sizeof(list[0]);

    for (int i = 0; i < len; i++)
    {
        if (i == 0)
        {
            list[i] = 1;
        }
        else
        {
            list[i] = list[i - 1] * 2;
        }

    }

    for (int i = 0; i < len; i++)
    {
        printf("list[%d] = %d\n", i, list[i]);
    }

    return 0;


}