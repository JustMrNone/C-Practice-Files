#include <stdio.h>
#include <stdlib.h>

#define NUM 20

// Function declaration
void selection_sort(int arr[], int size);

int main(int argc, char *argv[]) {
    int numbers[NUM] = {42, 17, 58, 93, 64, 25, 36, 81, 72, 19, 7, 53, 99, 2, 61, 83, 12, 45, 67, 31};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Original array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Sort the array using Selection Sort
    selection_sort(numbers, size);

    printf("Array after Selection Sort:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}

// Selection Sort function
void selection_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        // Find the minimum element in the unsorted portion of the array
        int min_index = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }
}
