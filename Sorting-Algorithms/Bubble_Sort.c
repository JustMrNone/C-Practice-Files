#include <stdio.h>
#include <stdlib.h>

#define NUM 20

// Function declaration
void bubble_sort(int arr[], int size);

int main(int argc, char *argv[]) {
    int numbers[NUM] = {42, 17, 58, 93, 64, 25, 36, 81, 72, 19, 7, 53, 99, 2, 61, 83, 12, 45, 67, 31};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Original array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Sort the array using Bubble Sort
    bubble_sort(numbers, size);

    printf("Array after Bubble Sort:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}

// Bubble Sort function
void bubble_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
