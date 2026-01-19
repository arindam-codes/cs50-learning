#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Keeping all functions in top
int sum_even_places(string s);
int sum_odd_places(string s);
string determine_card_type(string s, int checksum);

// Sum of even places and sum of odd places and checking card type
int main(void)
{
    // Using long int for prompting the user untill user gives the correct format
    long number = get_long("Number: ");
    // Converting long int into arrays of char which is str
    char str[20];
    sprintf(str, "%li", number);
    // Checking the CheckSum
    int checksum = sum_even_places(str) + sum_odd_places(str);
    // Checking the Card Type
    printf("%s\n", determine_card_type(str, checksum));
}

// Sum of digits of even places
int sum_even_places(string s)
{
    int n = strlen(s);
    int sum = 0;
    int first_digit;
    int last_digit;

    // Finding the Even places
    for (int even_place = n - 2; even_place >= 0; even_place -= 2)
    {
        // Converting from the Compiler from str to int and storing it as int
        int digit = s[even_place] - '0';
        // If the pdt is more than 9 that is upto two decimal places
        // we need to add the digits of this digit itself
        if ((digit * 2) > 9)
        {
            first_digit = 1;
            last_digit = (digit * 2) % 10;
        }
        else
        {
            first_digit = 0;
            last_digit = 0;
        }
        // Calculating the sum including the two decimal place digits
        sum += (digit * 2) + first_digit + last_digit;
        // Calculating the correct sum excluding that two decimal place digit
        if ((digit * 2) > 9)
        {
            sum -= (digit * 2);
        }
    }
    // returning the sum of even places to main function
    return sum;
}

// Sum of odd places
int sum_odd_places(string s)
{
    int n = strlen(s);
    int sum = 0;
    int first_digit;
    int last_digit;

    // Finding the Odd places
    for (int odd_place = n - 1; odd_place >= 0; odd_place -= 2)
    {
        int digit = s[odd_place] - '0';
        sum += digit;
    }
    // returning the sum of odd places to main function
    return sum;
}

// Checking the Card Type if last decimal place of checksum is 0
string determine_card_type(string s, int checksum)
{
    // Checking includes only MasterCard, Visa and Amex
    // any other card will be counted as Invalid
    if (checksum % 10 == 0)
    {
        if ((strlen(s) == 13 || strlen(s) == 16) && (s[0] == '4'))
        {
            return "VISA";
        }
        else if (strlen(s) == 15 && (s[0] == '3' && (s[1] == '4' || s[1] == '7')))
        {
            return "AMEX";
        }
        else if (strlen(s) == 16 && (s[0] == '5' && (s[1] >= '1' && s[1] <= '5')))
        {
            return "MASTERCARD";
        }
        else
        {
            return "INVALID";
        }
    }
    // Counting the fake cards as Invalid
    else
    {
        return "INVALID";
    }
}
