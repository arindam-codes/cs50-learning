// words
// L = (no of letter in the whole passage / no of word in the whole passage ) * 100
// S = (no of sentence in the whole passage / no of words in the whole passage) * 100

//letter
// {done letters} [[letter :- excluding spaces, comma, ?, !, ., ',
// or can i say a letter will be only those whose numeric representation of a binary is
// from 65 to 90  and from 97 to 122 yh i can say anything except that is not a letter and
// cost is theta(n) so not a bad deal]] {done}

//word
// {word} [[space is only the thing which seprates two words
// apostrophe is not meant to be counted as a seperator of two words
// so 32 to indicate a space char]]{word}

//sentences
// only 3 marks ? ! and . to distinct sentences
// i can include caps too to distinct a sentence

#include <cs50.h>
#include <stdio.h>
#include <string.h>
// defining functions
int get_numbers_of_letter(string passage);
int get_numbers_of_words(string passage);


int main(void)
{
    string passage = get_string("Text: ");
    int number = get_numbers_of_letter(passage);
    int w_number = get_numbers_of_words(passage);
    printf("Letters: %i\nWords:   %i\n", number, w_number);
}

// getter method to get number of letters
int get_numbers_of_letter(string passage)
{
    int number_of_letter = 0;
    for (int i = 0, n = strlen(passage); i < n; i++)
    {
        //anything from 65 to 90 and 97 to 122
        int digit = passage[i];
        if ((digit >= 65 && digit <= 90) || (digit >= 97 && digit <= 122))
        {
            number_of_letter ++;
        }
    }
    return number_of_letter;
}

// words
int get_numbers_of_words(string passage)
{
    // number of words = number of spaces + 1
    int number_of_words = 1;
    for (int i = 0, n = strlen(passage); i < n; i++)
    {
        // numeric 32 represents space char
        // count the number of space char

        if (passage[i] == ' ')
        {
            number_of_words ++;
        }
    }
    return number_of_words;
}
