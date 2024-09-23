#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h> // For round()

int lettercount(char sentence[], int counter);
int wordcount(char sentence[], int counter);
int sentcount(char sentence[], int counter);
float calculate_readability(int letters, int words, int sentences);

int main(void)
{
    char sen[1024];

    // Read the input sentence
    printf("Text: ");
    fgets(sen, sizeof(sen), stdin);
    int count = strlen(sen);

    // Remove newline at the end of the input if exists
    if (sen[count - 1] == '\n')
    {
        sen[count - 1] = '\0';
        count--;
    }

    // Count letters, words, and sentences
    int lett = lettercount(sen, count);
    int words = wordcount(sen, count);
    int sents = sentcount(sen, count);

    // Calculate readability
    float res = calculate_readability(lett, words, sents);

    // Output the grade based on the result

    if (res >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (res < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %.0f\n", round(res)); // Round result to nearest integer and print
    }

    return 0;
}

int lettercount(char sentence[], int counter)
{
    int lettercount = 0;
    for (int i = 0; i < counter; i++)
    {
        if (isalpha(sentence[i]))
        {
            lettercount++;
        }
    }
    return lettercount;
}

int wordcount(char sentence[], int counter)
{
    int wordcount = 1; // Start at 1 because there's always at least 1 word
    for (int i = 0; i < counter; i++)
    {
        if (sentence[i] == ' ')
        {
            wordcount++;
        }
    }
    return wordcount;
}

int sentcount(char sentence[], int counter)
{
    int sent = 0;
    for (int j = 0; j < counter; j++)
    {
        if (sentence[j] == '.' || sentence[j] == '!' || sentence[j] == '?')
        {
            sent++;
        }
    }
    return sent;
}

float calculate_readability(int letters, int words, int sentences)
{
    float L = (float) letters / words * 100;
    float S = (float) sentences / words * 100;
    float index = 0.0588 * L - 0.296 * S - 15.8;
    return index;
}
