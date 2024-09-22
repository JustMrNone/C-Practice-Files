#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char name[100];
    char last[100];
    char num[100];
    printf("enter name: ");
    fgets(name, sizeof(name), stdin);
    printf("enter last: ");
    fgets(last, sizeof(last), stdin);
    printf("enter phone: ");
    scanf("%s", &num);

    printf("%s\n%s\n%s\n", name, last, num);

}