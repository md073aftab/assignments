//  An election is contested by 5 candidates. The candidate is numbered are 1 to 5 
// and the voting is done by marking the candidate number on the ballot paper. 
// Write a program to read the ballots and count the votes cast for each candidate 
// using an array variable count. In case, a number, read is outside the range 1 to 5, 
// the ballot should be considered as a ‘spoilt ballot’ and the program should also 
// count the number of spoilt ballots.

#include <stdio.h>

int main() {
    int votes[100], count[5] = {0}, n, spoilt = 0;

    printf("Enter the number of voters: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &votes[i]);

        if (votes[i] >= 1 && votes[i] <= 5)
        {
            count[i] = votes[i];
        }
         else
        {
            spoilt++;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Candidate %d: %d votes\n", i + 1, count[i]);
    }

    printf("Spoilt ballots: %d\n", spoilt);

    return 0;
}