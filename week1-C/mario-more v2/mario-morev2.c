#include <stdio.h>
void right_bricks(int Height);
void left_bricks(int Height);
void print_char(int row);
void mario(int Height);



int main(void)
{
    // right_bricks(4);
    // left_bricks(4);
    // print_char(4);
    mario(4);
    mario(1);
    mario(2);
    mario(8);

}
// I first developed right bricks bc it was easy to do then
// put it inside right_bricks function

void right_bricks(int Height)
{
    for (int i = 0; i < Height;i++)
    {   
        for (int j = 0; j <= i; j++)
        {
            printf("#");

        }
        printf("\n");
    }
}

// Now i get it that i can print charecters liek this way inside a 
// for loop so printed spaces and then hashes wtr row numbers
// then put inside left_bricks function

void left_bricks(int Height)
{
    for (int row = 1; row <= Height; row++)
    {
        for (int col_sp = 1; col_sp <= Height - row; col_sp++)
        {
            printf(" ");
        }

        for (int col_hash = 1; col_hash <= row; col_hash++)
        {
            printf("#");
        }
        printf("  ");
        printf("\n");
        
    }    
}

// then i was thinking to use some type of obj.__str__() bcz i know a little
// bit of python but theres ntg like that in C
// so i thought to print it in one go using for loop

void mario(int Height)
{   
    printf("Height: %i\n", Height);

    for (int num_row = 1; num_row <= Height; num_row++)
    {
        // i need another loop which will create left spaces :_3
        for (int col_sp = 1; col_sp <= Height - num_row; col_sp++)
        {
            printf(" ");
        }
        
        // calling a function which will print hash
        print_char(num_row);
        
        printf("  ");

        // calling a function which will print hash
        print_char(num_row);

        printf("\n");
        
    }
    printf("\n");
}   



void print_char(int row)
{
    for (int i = 1; i <= row; i++)
    {
        printf("#");
    }
}

// and finally i did it 
// first day i did only right block 
// 2nd day i didnt try to do it
// 3rd day i did the left bricks and put iside a function 
// i did it in my local machine so i didnt use cs50.h 















