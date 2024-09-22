#include <stdio.h>
#include <stdlib.h>

float average(int length, int arra[]);

int main()
{
    const int N = 3;
    int *scores = malloc(N * sizeof(int));  // Dynamically allocate memory for the array

    for (int i = 0; i < N; i++)
    {
        scanf("%i", &scores[i]);
    }

    printf("average = %f\n", average(N, scores));

    free(scores);  // Don't forget to free the dynamically allocated memory
}

float average(int length, int arra[])
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += arra[i];
    }
    return sum / (float)length;
}
