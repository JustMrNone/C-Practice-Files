#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numbers[20];
    int i;

    // Seed the random number generator with the current time
    srand(time(0));

    // Populate the array with 20 random numbers
    for (i = 0; i < 20; i++) {
        numbers[i] = rand() % 100; // Random number between 0 and 99
    }

    // Print the random numbers
    printf("Random numbers:\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    return 0;
}
