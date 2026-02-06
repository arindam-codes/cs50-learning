

# Plurality

## Overview

This program implements a **plurality voting system**, where each voter votes for one candidate, and the candidate(s) with the highest number of votes win the election.

The program takes candidate names as command-line arguments, collects votes from users, counts them efficiently, and prints the winner (or winners in case of a tie).

---

## What I Learned from This Project

While working on this program, I learned several important programming concepts:

* **How to define new data types** using `struct`
* **How to use custom data types** to store related information together (candidate name and vote count)
* **How to keep track of variables** (such as vote counts) and **compare them with other values** using a tracked variable
* How to design logic that avoids unnecessary work and keeps the program efficient

---

## Data Structure Design

Each candidate is represented using a custom data type:

```c
typedef struct
{
    string name;
    int votes;
} candidate;
```

This allowed me to:

* Store a candidate’s name and vote count together
* Access and update vote counts easily
* Compare vote counts while determining the winner

---

## Program Design and Efficiency

* Votes are counted using a **single pass** through the candidates list
* The winner is determined using a tracked variable that stores the index of the current maximum vote count
* The program avoids nested loops over voters and candidates wherever possible

Because of this design:

* Vote counting runs in **Θ(n)** time relative to the number of candidates
* Winner determination also runs in **Θ(n)** time
* The program remains efficient even as the number of candidates increases

---

## How the Program Works

1. Candidate names are provided as command-line arguments
2. The program initializes all vote counts to zero
3. Voters enter their votes one by one
4. Each vote is validated and counted
5. The program tracks the maximum vote count
6. The winner(s) are printed

---

## Example Run

```
$ ./plurality Alice Bob
Number of voters: 3
Vote: Alice
Vote: Bob
Vote: Alice
Alice
```

---

## Key Concepts Used

* Structs and custom data types
* Arrays
* Variable tracking and comparison
* Efficient loop design
* String comparison with `strcmp`
* Command-line arguments
* Time complexity analysis (Θ(n))

---

## Conclusion

This project helped me understand how to design programs that are both **logically correct** and **efficient**. By defining my own data types and carefully tracking variables, I was able to build a clean solution with **Θ(n) time complexity**.

---
