#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *file = fopen("phonebook.csv", "a");
    if (file == NULL)
        return 1;
    
    char *name = malloc(1024 * sizeof(char));
    char number[1024];

    fgets(name, sizeof(name), stdin);
    fgets(number, sizeof(number), stdin);

    fprintf(file, "%s,%s", name, number);
    
    fclose(file);
}