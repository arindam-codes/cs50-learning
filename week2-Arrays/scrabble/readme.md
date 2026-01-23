## Learning Reflection – Scrabble

Although the Scrabble problem is part of **Week 2**, most of the core concepts required to solve it were introduced earlier, 
especially in **Week 1**. This problem was less about learning new syntax and more about **designing a solution** using previously learned ideas.

### What I already knew from week 1 Credit problem 
Before starting this problem, I was already familiar with:
- Arrays and array indexing
- Iterating over strings using `for` loops
- ASCII numeric representation of characters
- The fact that alphabetical characters are stored as sequential integer values
- Using functions like `strlen()`, `tolower()`

These concepts were introduced in Week 1, but at that stage they were not yet fully internalized.

---

### What this problem reinforced
The Scrabble problem required me to:
- Design a **letter-to-score mapping** using an array
- Manipulate ASCII values (`letter - 'a'`) to index into that array
- Treat arrays as **lookup tables** instead of using long `if-else` chains
- Normalize input using `tolower()` to handle case-insensitive scoring

This was the first time ASCII manipulation felt like a **practical tool** rather than a theoretical concept.

---

### From understanding to mastery
Even though I had encountered ASCII-based indexing in Week 1, I was not able to apply it confidently at that time. While solving this problem in Week 2, repeated use of:
- character normalization
- safe array indexing
- array-based scoring logic

made the concept feel **natural and automatic**.

This problem marked the transition from:
> *“I understand how this works”*  
to  
> *“I can now use this without consciously thinking about it.”*

---

### Key takeaway
This problem demonstrated that:
- Learning a concept once does not guarantee mastery
- Real understanding comes from **reusing concepts in new contexts**
- CS50 problems reinforce earlier material through application rather than repetition

The Scrabble problem helped solidify my understanding of arrays, ASCII manipulation, and problem design in C.
