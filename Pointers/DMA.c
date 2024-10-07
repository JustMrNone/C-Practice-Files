#include <stdio.h>
#include <stdlib.h>


void printArray(int *arr, int size);
int main()
{
    //initialize y to 0
    int y = 0;
    //take the y from the user
    scanf("%i", &y);
    //allocate the memory for array 
    int *x = malloc(y);

    for(int i = 0; i < y; i++)
    {
        scanf("%i", &x[i]);
    }

    printArray(x, y);
    
    free(x);
    
}
void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%i ", arr[i]);
    }
}