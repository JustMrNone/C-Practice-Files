#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    // Ensure only one command-line argument is provided
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Ensure the key is a valid non-negative integer
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // Convert the key from string to integer
    int key = atoi(argv[1]);

    // Prompt the user for the plaintext
    char plaintext[1024];
    printf("plaintext:  ");
    fgets(plaintext, sizeof(plaintext), stdin);

    // Print the ciphertext
    printf("ciphertext: ");
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        char c = plaintext[i];
        
        // Check if the character is a letter
        if (isalpha(c))
        {
            // Check if the letter is uppercase
            if (isupper(c))
            {
                printf("%c", (c - 'A' + key) % 26 + 'A');
            }
            // Check if the letter is lowercase
            else if (islower(c))
            {
                printf("%c", (c - 'a' + key) % 26 + 'a');
            }
        }
        else
        {
            // If not a letter, just print it unchanged
            printf("%c", c);
        }
    }

    // Print newline and return success
    printf("\n");
    return 0;
}
