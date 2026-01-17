## Learning Notes – Week 1 (Credit Problem Prep)

I like to keep a small **tester / experiment file** alongside problem sets to understand new concepts before using them in the actual solution.

This morning, I referred to the **CS50 Manual**
👉 [https://manual.cs50.io/](https://manual.cs50.io/)

and experimented with the following code:

```c
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input: ");
    printf("Output: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}
```

---

### What I learned from this experiment

* C strings **can be indexed**, similar to Python (`s[i]`)
* In CS50, `string` is actually a `char *` (a pointer to characters)
* Indexing in C works through **pointer arithmetic**

When I write:

```c
s[i]
```

under the hood, C is doing something equivalent to:

```c
*(s + i)
```

This means:

* `s` points to the first character in memory
* `s + i` moves `i` positions forward
* `*(s + i)` reads the character stored at that memory location

---

### How C knows where a string ends

C strings do **not** store their length explicitly.
Instead, they end with a special **null terminator**:

```c
'\0'
```

Functions like `strlen` work by looping internally until they find this `'\0'`, essentially doing something like:

```c
while (s[i] != '\0')
```

This explains why:

* `strlen(s)` takes time proportional to string length (time complexity is theta(n))
* Accessing characters beyond the string length is unsafe

---

### Key takeaway

This experiment helped me understand that C strings are:

* raw memory
* accessed via pointers
* indexed manually without bounds checking

This understanding is critical for implementing **Luhn’s algorithm** in the Week 1 `credit` problem, where processing each digit individually is required.

Overall, it was a productive morning of learning how C handles strings at a lower level than Python.
