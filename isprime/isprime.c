#include <stdio.h>
#include <math.h>

void isprime(int num);


int main(void)
{
    int n;
    printf("enter a number: ");
    scanf("%i", &n);
    isprime(n);
}

void isprime(int num)
{

    if (num > 1)
    {
        int ispr = 0;
        for(int i = 2; i <= sqrt(num); i++)
        {
            if(num % i == 0)
            {
                ispr = 1;
                printf("%i is not prime, divided by %i\n", num, i);
                break;
            }
        }
        if(!ispr)
        {
            printf("%i is prime\n", num);
        }
    }
    else
    {
        printf("%i is not prime\n", num);
    }
}