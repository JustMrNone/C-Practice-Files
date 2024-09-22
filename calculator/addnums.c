#include <stdio.h>

//function declaration
float add_nums(float a, float b);


int main()
{

    // function call
    float ans = add_nums(1, 3);
    printf("%f", ans);
}
//function defenition
float add_nums(float a, float b)
{
    return a + b;
}