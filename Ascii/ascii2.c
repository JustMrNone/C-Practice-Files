#include <stdio.h>

int main(void)
{
    int a;
    printf("Enter a number: ");
    scanf("%i", &a);
    if (0 <= a && a < 128)
    {
        printf("%c", a);
    }
    else
    {
        printf("Invalid input should be between 0 and 128");
    }

}