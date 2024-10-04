#include <stdio.h>

int main()
{
    // initilize variable x 
    int x = 3;
    //initilize the pointer y and ponit to x 
    int *y = &x;
    int z = 5;
    //y is not called *y, * is just a part of the syntax 
    y = &z;
    // dereference y and copy result to screen 
    printf("%i", *y);
    return 0;
}