#include <stdio.h>
#include <stdlib.h>
#define NUM 20
int binary_search(int arr[], int size, int target);

int main(int argc, char *argv[])
{
    //sorted list to begin with
    int numbers[NUM] =  {2, 7, 12, 17, 19, 25, 31, 36, 42, 45, 53, 58, 61, 64, 67, 72, 81, 83, 93, 99};
    //total bytes / bytes of element 0
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int target = 0;

    if (argc > 1)
        target = atoi(argv[1]);
    else
        scanf_s("%d", &target);
    
    int result = binary_search(numbers, size, target);

    if(result != -1)
        printf("element %i was found! ", target);
    else
        printf("element %i not found! ", target);

    
    return 0;

}

int binary_search(int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;
    while(low <= high)
    {
        int mid = low + (high - low) / 2;
        if(arr[mid] == target)
            return mid;
        else if(arr[mid] < target)
            low = mid + 1;
        else if(arr[mid] > target)
            high = mid - 1;
    }
    return -1;
}