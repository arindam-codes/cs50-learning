in this portion
int get_index(int l_number, int w_number, int s_number)
{
    int L, S, index;
    L = (l_number / (float) w_number) * 100;
    S = (s_number / (float) w_number) * 100;
    index = 0.0588 * L - 0.296 * S - 15.8;
    return index;
}

for this passage : Harry Potter was a highly unusual boy in many ways. For one thing, he hated the summer holidays more than any other time of year. For another, he really wanted to do his homework, but was forced to do it in secret, in the dead of the night. And he also happened to be a wizard. 
it gave me 4 but in cs50 page it was graded as 5 
so i used duck dbugger and got that 
in C, when you return an integer, any decimal part is truncated, not rounded
if i want it to round to nearest whole number i need to do something 

float has 4 bytes of storage capacity (32 bits)
 1 bit for sign 
 8 bit for range of magnitude exponents
 23 bits for precision 

 so it doesnt use all of its memory to show integers like int does it has 4 bytes of memory so signed approx 2 billion and unsigned approx 4 billion 
 but float describes a value and uses its memory to descirbe precision abt its number in decimal part so it can show maximum integr upto 16 million 

 now for double which uses 8 bytes of storage capacity (64 bits)
 1 bit for sign 
 11 bits for range of magnitude exponent 
 52 bits for decimal places for precision

 max integer it can show upto 9 quadrillion (9+e15)
 
 


