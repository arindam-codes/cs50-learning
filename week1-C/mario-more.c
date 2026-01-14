#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int row = get_int("how many rows: ");
    int column = get_int("how many columns: ");

    for (int i = 0; i < row;i++)
    {
        printf("\n");

        for (int j = 0; j < column; j++)
        {
            printf("#");

        }
    }
    printf("\n");

}

