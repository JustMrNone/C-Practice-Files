#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a = malloc(3 * sizeof(int));
    if(a == NULL)
        return 1;

    a[0] = 1;
    a[1] = 2;
    a[2] = 3;

    //time passes

    int *temp = malloc(4 * sizeof(int));
    if(temp == NULL)
    {
        free(a); //to avoid memory leak
        return 1;
    }


    for(int i = 0; i < 3; i++)
        temp[i] = a[i];
    
    temp[3] = 4;

    free(a);
    a = temp;

    for(int i = 0; i < 4; i++)
        printf("%i\n", a[i]);
    
    free(a);
    return 0;

    
}