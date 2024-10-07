#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file = fopen("data.txt", "r");

    if(file == NULL)
        return 1;

    int *numbers = malloc(10 * sizeof(int));

    if (numbers == NULL) {
        printf("Error: Memory allocation failed.\n");
        fclose(file);
        return 1;
    }

    for(int i = 0; i < 10; i++)
    {
        if(fscanf(file, "%d", &numbers[i]) != 1)
        {
            printf("could not read integer from file.");
            free(numbers);
            fclose(file);
            return 1;
        }
    }

    for(int i = 0; i < 10; i++) 
        printf("%d\n", numbers[i]);

    free(numbers);  // Free the allocated memory
    fclose(file);   // Close the file
    return 0;
}

