#include <stdio.h>
#include <string.h>

int main(void)
{
    char *string = "HI!";

    printf("Address of %c is stored in the pointer so when we dereference the string we see that address of [%c] is stored inside which is the first char of the string\n", *string, *string);

    printf("(%s) place in memory starts at %p until nul terminated.\n", string, (void*)string);

    //Both string[i] and *(string + i) are equivalent This is because array notation (like string[i]) is essentially dereferencing string + i
    //The reason *(string + i) is in parentheses is because of operator precedence
    //[] which come with C is just syntactic suger, [] by the compiler are turned into pointer arithmatic for you
    for(int i = 0; i < strlen(string); i++)

        printf("%c is at %p\n", *(string + i), (void*)&string[i]);

    return 0;
}

// (c - 'a' - num) % 26 - 'a';