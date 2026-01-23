## Readability Score Calculator
This function calculates a readability index based on L (average letters per 100 words) and S (average sentences per 100 words), using the Coleman-Liau formula.
--- 
```
int get_index(int l_number, int w_number, int s_number)
{
    int L, S, index;
    L = (l_number / (float) w_number) * 100;
    S = (s_number / (float) w_number) * 100;
    index = 0.0588 * L - 0.296 * S - 15.8;
    return index;
}
```
