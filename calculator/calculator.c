#include <stdio.h>
#include <string.h>
#include <math.h>
float cal(float num1, float num2, const char *operation);
int main()
{
    float x, y;
    char o[3];
    scanf("%f %s %f", &x, o, &y);
    if (strcmp(o, "+") == 0 || strcmp(o, "-") == 0 || strcmp(o, "*") == 0 || strcmp(o, "/") || strcmp(o, "%") == 0 || strcmp(o, "**") == 0 || strcmp(o, "//"))
    {
        float answer = cal(x, y, o);
        printf("%.3f\n", answer);
    }
    else
    {
        printf("Invalid operator.");
        return 0;
    }    
}

float cal(float num1, float num2, const char *operation)
{
    if (strcmp(operation, "**") == 0)
    {
        return pow(num1, num2);
    }
    else if(strcmp(operation, "+") == 0)
    {
        return num1 + num2;
    }
    else if(strcmp(operation, "-") == 0){
        return num1 - num2;
    }
    else if(strcmp(operation, "*") == 0)
    {
        return num1 * num2;
    }
    else if (strcmp(operation, "/") == 0)
    {
        if (num2 == 0)
        {
            printf("zero division error! ");
        }
        else
        {
            return num1 / num2;
        }
    }
    else if (strcmp(operation, "%") == 0)
    {
        if((int)num2 != 0)
        {
            return (int)num1 % (int)num2;
        }
        else
        {
            printf("modulo operation by zero error! ");
            return NAN;
        }
    }
    else if (strcmp(operation, "//") == 0)\
    {
        if (num2 != 0)
        {
            float result = pow(num1, 1 / num2);
        }
        else
        {
            printf("Error: Division By Zero! ");
            return NAN;
        }
    }
    else
    {
        printf("Not defined.");
        return NAN;
    }

}