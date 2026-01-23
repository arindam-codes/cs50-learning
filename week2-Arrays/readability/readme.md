---
## Readability Score Calculator
### This function calculates a readability index based on L (average letters per 100 words) and S (average sentences per 100 words), using the Coleman-Liau formula.
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
---
### 🐛 CS50 Grading Issue (4 vs 5)
Test case: "Harry Potter was a highly unusual boy in many ways..."
My output: 4
Expected: 5

Root cause: C truncates integers toward zero, not rounds!
```
index = 4.8... → truncated to 4 (wrong!)
index = 4.8... → should round to 5 ✓
```
so i used round function which Requires #include <math.h>
---
