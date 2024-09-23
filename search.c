#include <stdio.h>

int main()
{
    int list[] = {20, 500, 10, 5, 100, 1, 50};

    int n; 
    scanf("%i", &n);
    for(int i = 0; i < sizeof(list); i++)
        if(list[i] == n)
        {
            printf("Element found at index %i\n", i);
            return 0;
        }

    printf("not found.");
    return 0;

}

// == does not work on strings
// == works on integers, floats, chars, etc.