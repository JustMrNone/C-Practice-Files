//preprocessing directive standard input/output library 
#include <stdio.h>

//function prototype to print horizontal line with '#'
void hor(int num);


int main()
{
    //constand int variable called number 
    const int number;
    do
    {
        //take the inuput and point it to the number in memory 
        scanf("%i", &number);
    }
    //take the input as long as value is under 0
    while(number < 0);

    //loop over void hor(int num); and add \n for each line 

    for(int i = 0; i < number; i++)
    {
        //call the self defined hor function 
        hor(number);
        printf("\n");
    }
}
// define the function for printing the horizantal line
void hor(int num)
{
    //loop over the number and print '#' for each iteration
    for(int j = 0; j < num; j++)
    {
        printf("#");
    }
}