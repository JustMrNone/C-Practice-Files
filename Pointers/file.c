#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file = fopen("data.txt", "a");
    if(file == NULL)
        return 1;
    
    int size;
    scanf("%i", &size);
    int *integers = malloc(size);

    for(int i = 0; i < size; i++)
        scanf("%i", &integers[i]);
    
    for(int j = 0; j < size; j++)
        fprintf(file, "%i ", integers[j]);
    
    fprintf(file, "\n");

    fclose(file);
    
}
