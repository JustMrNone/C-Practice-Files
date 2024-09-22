#include <stdio.h>

#define N 3 

float average(int length, int arra[]);
int main()
{
    int scores[N];
    for(int i = 0; i < N; i++)
    {
        scanf("%i", &scores[i]);
    }
    printf("average = %f", average(N, scores));
}

float average(int length, int arra[])
{
    int sum = 0;
    for(int i = 0; i < length; i++)
    {
        sum += arra[i];
    }
    return sum / (float) length;
}