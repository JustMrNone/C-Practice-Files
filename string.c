#include <stdio.h>
#include <string.h>

int main(void)
{
    char *string = "HI!";

    printf("Address of %c is stored in the pointer so when we dereference the string we see that address of [%c] is stored inside which is the first char of the string\n", *string, *string);

    printf("(%s) place in memory starts at %p until nul terminated.\n", string, (void*)string);

    //Both string[i] and *(string + i) are equivalent This is because array notation (like string[i]) is essentially dereferencing string + i
    for(int i = 0; i < strlen(string); i++)

        printf("%c is at %p\n", *(string + i), (void*)&string[i]);

    return 0;
}