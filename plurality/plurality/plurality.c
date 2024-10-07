#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
// Max number of candidates
#define MAX 9

// Candidates have name and vote count
typedef struct
{
    char *name;
    int votes;
} candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidates
int candidate_count;

// Function prototypes

bool vote(char *name);
void print_winner(void);

int main(int argc, char *argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }

    int voter_count = 0;

    do
    {
        printf("Number of voters: ");
        int result = scanf_s("%d", &voter_count);

        // If scanf_s fails to read an integer or voter_count is not positive, reset the input
        if (result != 1 || voter_count <= 0)
        {
            printf("Please enter a valid positive integer.\n");

            // Clear the input buffer in case of invalid input
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);
        }

    } while (voter_count <= 0);



    // Loop over all voters
    for (int i = 0; i < voter_count; i++)
    {
        char name[100];
        printf("Vote: ");
        scanf_s("%99s", name, sizeof(name));

        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }

    // Display winner of election
    print_winner();
}

// Update vote totals given a new vote
bool vote(char *name)
{
    for(int i = 0; i < candidate_count; i++)
    {
        if(strcmp(candidates[i].name, name) == 0)
        {
            candidates[i].votes++;
            return true;
        }

    }
    return false;

}

// Print the winner (or winners) of the election
void print_winner(void)
{
    // Find the maximum vote count
    int max_votes = 0;

    // First, find the max votes
    for (int i = 0; i < candidate_count; i++)
        if (candidates[i].votes > max_votes)
            max_votes = candidates[i].votes;
        
    

    // Print the names of candidates who have the maximum votes
    printf("Winner(s):\n");
    for (int i = 0; i < candidate_count; i++)
        if (candidates[i].votes == max_votes)
            printf("%s\n", candidates[i].name);

}