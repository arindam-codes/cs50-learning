#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// defining functions
string ciphertext(string plain_txt, string c_argv);

int main(int argc, string argv[])
{
    // check for single cl arg
    if (argc != 2)
    {
        printf("Key must contain 1 argument\n");
        return 1;
    }

    // check if it contains 26 positions or not
    else if (strlen(argv[1]) != 26)
    {
        printf("Key must contain 26 charecters\n");
        return 1;
    }

    // declaring the array of char from str consists of 26 letter of argv
    // hard coded 26 bcz the problem is only for 26 letters else strlen()
    char c_argv[26];
    for (int i = 0; i < 26; i++)
    {
        // 0th arg is the file name, 1th arg is the key
        // modifying each char of array of str of argv
        c_argv[i] = argv[1][i];

        // checking ig each charecter of key is alphabetic or not
        if (!isalpha(c_argv[i]))
        {
            printf("Key must contain alphabetical values\n");
            return 1;
        }

        // modifying each char into lower case
        c_argv[i] = tolower(c_argv[i]);

        // checking for same chars
        for (int j = 0; j < i; j++)
        {
            if ((i != j) && (c_argv[i] == c_argv[j]))
            {
                printf("Key must contain each letter exactly once\n");
                return 1;
            }
        }
    }

    // prompting the user for plain text
    string plain_txt = get_string("plaintext:  ");
    string cipher_txt = ciphertext(plain_txt, c_argv);
    printf("ciphertext: %s\n", cipher_txt);
    return 0;
}

string ciphertext(string plain_txt, string c_argv)
{

    // hovering over thru plain text
    for (int i = 0, n = strlen(plain_txt); i < n; i++)
    {
        // if plain text contains alpha chars it will be replaced by key arg char of same index
        if (!isalpha(plain_txt[i]))
        {
            continue;
        }

        // choosing the letter
        char low_plain_txt = tolower(plain_txt[i]);
        int value = low_plain_txt - 'a';
        char cipher_txt = c_argv[value];

        // capitalization
        if (!islower(plain_txt[i]))
        {
            plain_txt[i] = toupper(cipher_txt);
            continue;
        }
        plain_txt[i] = cipher_txt;
    }
    return plain_txt;
}
