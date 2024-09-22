#include <stdio.h>
//protype the function
void printlines(int spaces, int left, int right);
int main()
{

    int num;
    //take the number and put in num  variable
    scanf("%i", &num);

    for (int i = 0; i <= num; i++)
    {
        printlines(num - i, i, i);
        //print a \n after each line
        printf("\n");
    }
}

void printlines(int spaces, int left, int right)
{
    //print the left side of the triangle print space num - i 
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }
    // print the bricks
    for (int j = 0; j < left; j++)
    {
        printf("#");
    }
    // print the left side of the triangle
    for (int k = 0; k < right; k++)
    {
        printf("#");
    }
}