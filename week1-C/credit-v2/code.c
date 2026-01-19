#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input: ");
    printf("Output: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (i % 2 == 0 && i != 0)
        {

            int digit = s[i] - '0';
            printf("Digits x 2: ");
            printf("%i ", 2 * digit);
        }
        else if (i % 2 != 0 || i ==0)
        {
            printf("Digits to add: ");
            printf("%c\n", s[i]);
        }
    }
    printf("\n");
}

