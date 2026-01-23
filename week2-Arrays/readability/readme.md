---
## Readability Score Calculator
# This function calculates a readability index based on L (average letters per 100 words) and S (average sentences per 100 words), using the Coleman-Liau formula.
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
## 🐛 CS50 Grading Issue (4 vs 5)
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
```
Float vs Int Precision

| Type   | Bytes | Sign  | Exponent | Precision | Max Integer    |
| ------ | ----- | ----- | -------- | --------- | -------------- |
| float  | 4     | 1 bit | 8 bits   | 23 bits   | ~16M           |
| double | 8     | 1 bit | 11 bits  | 52 bits   | ~9 quadrillion |
| int    | 4     | 1 bit | -        | 31 bits   | ~2B            |

Float trades integer range for decimal precision 📏
---
```
# Text Processing Pro Tip
```
// Skip ASCII manual checks → use ctype.h
if (isalpha(c)) letter_count++;
```
---
I had already learned the remaining concepts while completing the Credit problem, so I was able to directly apply that knowledge here without relearning the theory.
I learned the core concepts while working on the Credit problem and fully mastered them through this implementation.


