#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
// defining functions
string to_lower(string player);
int value_of_word(string s);

int main(void)
{
    // get the input from 2 players
    string player1 = get_string("Player 1: ");
    string player2 = get_string("Player 2: ");

    // converting all letters into lower case
    string lc_player1 = to_lower(player1);
    string lc_player2 = to_lower(player2);

    // getting the sums for two players
    int sum_of_player1 = value_of_word(lc_player1);
    int sum_of_player2 = value_of_word(lc_player2);

    // comparing the sums of two players
    if (sum_of_player1 > sum_of_player2)
    {
        printf("Player 1 wins!\n");
    }
    else if (sum_of_player1 < sum_of_player2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

// converting each letter into lower case
string to_lower(string player)
{ // length for each input
    int length = strlen(player);

    for (int i = 0; i < length; i++)
    {
        player[i] = tolower(player[i]);
    }
    return player;
}

// get the value of each letter
// summing the value of each letter
int value_of_word(string s)
{
    int digit_0 = 'a';
    int sum = 0;
    int length = strlen(s);

    // value of each letter
    int value[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    for (int i = 0; i < length; i++)
    {
        int digit = s[i];
        if (digit >= 97 && digit <= 122)
        {
            sum += value[digit - digit_0];
        }
        continue;
    }
    return sum;
}
