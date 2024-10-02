#include <stdio.h>
#include <stdlib.h>
#define NUM 20

int main(int argc, char *argv[])
{
    int numbers[NUM] = {42, 17, 58, 93, 64, 25, 36, 81, 72, 19,
    7, 53, 99, 2, 61, 83, 12, 45, 67, 31
    };
    int n;
    
    if (argc > 1)
        n = atoi(argv[1]);
    else
        scanf_s("%i", &n);


    for(int i = 0; i < NUM; i++)
    {
        if(n == numbers[i])
        {
            printf("found!");
            return 0;
        }
    }
    printf("not found! ");
    return 0; 

}