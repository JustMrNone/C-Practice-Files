#include <math.h>
#include <stdio.h>

int isprime(int num);  // Function to check if a number is prime

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%i", &n);

    printf("Prime numbers up to %i are: ", n);
    for (int i = 2; i <= n; i++)  // Loop through all numbers from 2 to n
    {
        if (isprime(i))  // If the number is prime, print it
        {
            printf("%i ", i);
        }
    }
    printf("\n");
}

// Function to check if a number is prime
int isprime(int num)
{
    if (num < 2)
    {
        return 0;  // Numbers less than 2 are not prime
    }

    for (int i = 2; i <= sqrt(num); i++)  // Check divisibility up to sqrt(num)
    {
        if (num % i == 0)  // If num is divisible by i, it's not prime
        {
            return 0;
        }
    }
    return 1;  // If no divisors were found, num is prime
}
