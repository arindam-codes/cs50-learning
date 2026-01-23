// L = (no of letter in the whole passage / no of word in the whole passage ) * 100
// S = (no of sentence in the whole passage / no of words in the whole passage) * 100

//letter
// {done letters} [[letter :- excluding spaces, comma, ?, !, ., ',
// or can i say a letter will be only those whose numeric representation of a binary is
// from 65 to 90  and from 97 to 122 yh i can say anything except that is not a letter and
// cost is theta(n) so not a bad deal]] {done}

//word
// {done word} [[space is only the thing which seprates two words
// apostrophe is not meant to be counted as a seperator of two words
// so 32 to indicate a space char]]{done word}

//sentences
// {done sentences}only 3 marks ? ! and . to distinct sentences
// i can include caps too to distinct a sentence{done sentences}
// index = 0.0588 * L - 0.296 * S - 15.8

#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
// defining functions
int get_numbers_of_letter(string passage);
int get_numbers_of_words(string passage);
int get_number_of_sentences(string passage);
double get_index(double l_number, double w_number, double s_number);


int main(void)
{
    string passage = get_string("Text: ");
    int l_number = get_numbers_of_letter(passage);
    int w_number = get_numbers_of_words(passage);
    int s_number = get_number_of_sentences(passage);
    int index = get_index(l_number, w_number, s_number);
    // printing the grade
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("%i\n", index);
    }
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
        // count the number of space char
        if (passage[i] == ' ')
        {
            number_of_words ++;
        }
    }
    return number_of_words;
}

// sentences
int get_number_of_sentences(string passage)
{
    int number_of_sentences = 0;
    for (int i = 0, n = strlen(passage); i < n; i++)
    {
        char end_indctr = passage[i];
        if (end_indctr == '?' || end_indctr == '!' || end_indctr == '.')
        {
            number_of_sentences ++;
        }
    }
    return number_of_sentences;
}

// Calculating index
double get_index(double l_number, double w_number, double s_number)
{
    double L, S, index;
    L = (l_number / w_number) * 100;
    S = (s_number / w_number) * 100;
    index = 0.0588 * L - 0.296 * S - 15.8;
    return round(index);
}
