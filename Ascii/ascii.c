#include <stdio.h>

int main()
{
    char character;
    char ext;

    do
    {
        printf("Enter a character: ");
        scanf("%c", &character);

        ext = getchar();
        if (ext != '\n')
        {
            printf("this program only ecxept single chars\n");

            while(getchar() != '\n');
        }
        else
        {
            break;
        }

    }
    while(1);

    printf("corresponding ascii: %i", character);


}