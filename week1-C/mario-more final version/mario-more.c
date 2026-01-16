#include <cs50.h>
#include <stdio.h>

void print_char(int row);
void mario();

// calling mario function
int main(void)
{

    mario();
}

// creating mario

void mario()
{
    int height;

    // using do - while loop to ask the user if not prompted correctly
    // as positive integers 1 - 8
    do
    {
        height = get_int("Height: ");
    }
    while (!(height >= 1 && height <= 8));

    // loop for creating rows of pyramid
    for (int current_row = 1; current_row <= height; current_row++)
    {
        // another loop which will create left spaces
        for (int col_sp = 1; col_sp <= height - current_row; col_sp++)
        {
            printf(" ");
        }

        // calling a function which will print hash of left side bricks
        print_char(current_row);

        printf("  ");

        // calling a function which will print hash of right side bricks
        print_char(current_row);

        printf("\n");
    }
}

// for printing char(#)

void print_char(int row)
{
    for (int i = 1; i <= row; i++)
    {
        printf("#");
    }
}
