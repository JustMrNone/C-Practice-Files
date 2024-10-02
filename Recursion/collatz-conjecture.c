#include <stdio.h>
int collatz(int n);

int main()
{
    int n = 10;
    int ans = collatz(n);
    printf("%i", ans);
}

int collatz(int n)
{
    if(n == 1)
        return 0;
    else if((n % 2) == 0)
        return 1 + collatz(n/2);
    else
        return 1 + collatz(3*n + 1);
}