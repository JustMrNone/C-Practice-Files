#include <stdio.h>
int fact(int n);
int main()
{

    int n = 5;
    long long factorial = fact(n);
    printf("%lld\n", factorial);
}
int fact(int n)
{
    if (n == 1)
        return 1;
    else 
        return n * fact(n - 1);
}