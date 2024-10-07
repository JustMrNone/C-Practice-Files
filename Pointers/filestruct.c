#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char *name;
    int age;
    int grade;
}Student;

int main()
{
    FILE *file = fopen("students.txt", "w");
    
    if(file == NULL)
        return 1;

    int size;
    printf("Enter number of students: ");
    scanf("%i", &size);

    Student *list = malloc(size * sizeof(Student));
    if(list == NULL)
        return 1;

    for(int i = 0; i < size; i++)
    {
        list[i].name = malloc(100 *sizeof(char));
        if (list[i].name == NULL)
            return 1;
        
        printf("Enter name of student %i: ", i + 1);
        scanf("%s", list[i].name);
        printf("Enter age of student %i: ", i + 1);
        scanf("%i", &list[i].age);
        printf("Enter grade of student %i: ", i + 1);
        scanf("%i", &list[i].grade);
    }

    for(int i = 0; i < size; i++)
    {
        fprintf(file, "Name: %s\n", list[i].name);
        fprintf(file, "Age: %i\n", list[i].age);     
        fprintf(file, "Grade: %i\n", list[i].grade);

        fprintf(file, "----------------------\n"); 
    }

    for(int i = 0; i < size; i++)
        free(list[i].name);

    free(list);

    fclose(file);
    
    return 0;

}