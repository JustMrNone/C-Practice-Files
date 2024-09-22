#include <stdio.h>
// preprocessor directives //
#include <string.h>
#include <ctype.h>


//prototype function
void subs(int argnum ,char sequence[],char string[]);

int main(int argc, char *argv[])
{

    char nseq[1024];
    char str[1024];
    //take input 
    scanf("%s", &str);
    //put cmd argmnt into the variable 
    strcpy(nseq, argv[1]);
    // call func
    subs(argc , nseq, str);  

}

void subs(int argnum ,char sequence[],char string[])
{
    if (argnum == 2)
    {
        if (strlen(sequence) == 26)
        {
            
            
            for (int i = 0; i < strlen(string); i++)
            {
                if (isalpha(string[i]))  // Check if it's an alphabetic character
                {
                    // Substitute letter using the key (convert input to uppercase for lookup)
                    char substituted = sequence[toupper(string[i]) - 'A'];

                    // If the original character was lowercase, convert the result back to lowercase
                    if (islower(string[i]))
                    {
                        string[i] = tolower(substituted);
                    }
                    else
                    {
                        string[i] = substituted;  // Keep uppercase as is
                    }
                }
            }
            //debug statement
            printf("Key: %s\n", sequence);

            printf("Encrypted string: %s\n", string);
        }
        else
        {
            printf("Key must contain 26 characters.\n");
        }
    }
    else
    {
        printf("Usage: ./subs Key. \n");
    }

}