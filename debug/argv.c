#include <stdio.h>

int main(int argc, char *argv[]){

    if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
        {
            printf("%s", argv[i]);
            return 0;
        }
        
    }
    else
    {
        printf("No arguments provided.");
        return 1;
    }

}
//echo $?