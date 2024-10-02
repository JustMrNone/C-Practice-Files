#include <stdio.h>
#include <stdlib.h>

#define NUM 20

// Function declarations
int binary_search(int arr[], int size, int target);
void merge_sort(int arr[], int low, int high);
void merge(int arr[], int low, int mid, int high);

int main(int argc, char *argv[]) {
    int numbers[NUM] = {42, 17, 58, 93, 64, 25, 36, 81, 72, 19, 7, 53, 99, 2, 61, 83, 12, 45, 67, 31};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int target = 0;

    // If target is provided through command-line arguments, use that
    if (argc > 1) {
        target = atoi(argv[1]);
    }
    else {
        printf("Enter the target number: ");
        scanf("%d", &target);  // Using scanf for simplicity
    }

    // Sort the array using Merge Sort
    merge_sort(numbers, 0, size - 1);

    // Perform binary search on the sorted array
    int result = binary_search(numbers, size, target);

    if(result != -1) {
        printf("Element %d was found at index %d!\n", target, result);
    }
    else {
        printf("Element %d not found!\n", target);
    }

    return 0;
}

// Binary search function
int binary_search(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;  // Element not found
}

// Merge Sort function to sort the array
void merge_sort(int arr[], int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;

        // Recursively sort the two halves
        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);

        // Merge the sorted halves
        merge(arr, low, mid, high);
    }
}

// Merge function to merge two sorted subarrays
void merge(int arr[], int low, int mid, int high) {
    int n1 = mid - low + 1;
    int n2 = high - mid;

    // Temporary arrays to hold the two halves
    int left[n1], right[n2];

    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++) {
        left[i] = arr[low + i];
    }
    for (int j = 0; j < n2; j++) {
        right[j] = arr[mid + 1 + j];
    }

    // Merge the temporary arrays back into arr[low..high]
    int i = 0, j = 0, k = low;
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of left[], if any
    while (i < n1) {
        arr[k] = left[i];
        i++;
        k++;
    }

    // Copy the remaining elements of right[], if any
    while (j < n2) {
        arr[k] = right[j];
        j++;
        k++;
    }
}
