#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int a;
    char string[1024];
    char encrypted[1024];

    // Input: shift value (integer) and string to be encrypted
    if (scanf("%i", &a) != 1)  // Check if the key input is valid
    {
        printf("Error: Key must be a valid number.\n");
        return 1;  // Exit with an error code
    }

    scanf("%s", string);  // Input the string to be encrypted

    int len = strlen(string);

    for(int i = 0; i < len; i++)
    {
        char c = string[i];

        if(isalpha(c))  // Check if the character is a letter
        {
            if(isupper(c))  // Encrypt uppercase letters
            {
                encrypted[i] = (c - 'A' + a) % 26 + 'A';
            }
            else if(islower(c))  // Encrypt lowercase letters
            {
                encrypted[i] = (c - 'a' + a) % 26 + 'a';
            }
        }
        else  // Non-alphabet characters are unchanged
        {
            encrypted[i] = c;
        }
    }

    // Null-terminate the encrypted string
    encrypted[len] = '\0';

    // Output the encrypted result
    printf("Encrypted: %s\n", encrypted);

    return 0;
}
