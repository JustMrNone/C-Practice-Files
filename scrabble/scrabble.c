#include <stdio.h>
#include <string.h>
#include <ctype.h>

//prototype

int getscore(char ch);

int main(void)
{
    //arrays for strings
    char str1[1024];
    char str2[1024];

    //variables to store the score

    int score1 = 0;
    int score2 = 0;
    //ask for prompt
    printf("Player1: ");
    //store in the array
    scanf("%s", str1);

    printf("Player2: ");
    scanf("%s", str2);
    //add each score to the score variable 
    for (int i = 0, len = strlen(str1); i < len; i++)
    {
        score1 += getscore(toupper(str1[i]));
    }
    for (int i = 0, len= strlen(str2); i < len; i++)
    {
        score2 += getscore(toupper(str2[i]));
    }
    //calculate the result and declare the winner  

    if (score1 > score2)
    {
        printf("Player 1 wins\n");
    }
    else if (score2 > score1)
    {
        printf("Player 2 wins\n");
    }
    else
    {
        printf("It's a tie!\n");
    }
    //show the scores 

    printf("Score for '%s': %d\n", str1, score1);
    printf("Score for '%s': %d\n", str2, score2);

    return 0;

}

int getscore(char ch)
{   
    //define the array of scores 
    int scores[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10}; 
    //return the score of the character, this gives the proper index based on the difference of it and the letter 
    return scores[ch - 'A'];
}