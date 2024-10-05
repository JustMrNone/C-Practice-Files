#include <stdio.h>
#include <string.h>
void sum(int *a, int *b, int *answer);
void sub(int *a, int *b, int *answer);
void div(int *a, int *b, int *answer);
void mul(int *a, int *b, int *answer);

int main()
{
    int a = 0;
    int b = 0;
    int ans = 0;
    char o;
    printf("Enter the first number: ");
    scanf_s("%d", &a);
    printf("Enter the second number: ");
    scanf_s("%d", &b);
    printf("Enter the operator (+, -, *, /): ");
    scanf_s(" %c", &o, 1);

    if(o == '+')
        sum(&a, &b, &ans);
    else if(o == '-')
        sub(&a, &b, &ans);
    else if(o == '/')
        div(&a, &b, &ans);
    else if(o == '*')
        mul(&a, &b, &ans);
    else
    {
        printf("invalid operator.");
        return 0;
    }
    printf("\n%i", ans);
    return 0;
}
void sum(int *a, int *b, int *answer)
{
    *answer = *a + *b;
}
void sub(int *a, int *b, int *answer)
{
    *answer = *a - *b;
}
void div(int *a, int *b, int *answer)
{
    *answer = *a / *b;
}
void mul(int *a, int *b, int *answer)
{
    *answer = *a * *b;
}