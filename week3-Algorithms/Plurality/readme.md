

# Plurality

## Overview

This program implements a **plurality voting system**, where each voter votes for one candidate, and the candidate(s) with the highest number of votes win the election.

The program takes candidate names as command-line arguments, collects votes from users, counts them, and prints the winner (or winners in case of a tie).

This project is part of **CS50** and demonstrates:

* Structs
* Arrays
* Strings
* Command-line arguments
* Functions and loops

---

## How the Program Works

### 1. Command-Line Arguments

The program is run with candidate names provided as arguments:

```
./plurality Alice Bob Charlie
```

* Each argument becomes a candidate.
* The maximum number of candidates allowed is **9**.

---

### 2. Data Structure

Each candidate is represented using a struct:

```c
typedef struct
{
    string name;
    int votes;
} candidate;
```

* `name` stores the candidate’s name
* `votes` stores the number of votes received

All candidates are stored in an array called `candidates`.

---

### 3. Voting Process

* The program asks for the **number of voters**
* Each voter enters the name of a candidate
* The `vote` function:

  * Checks if the name matches a valid candidate
  * Increments that candidate’s vote count
  * Rejects invalid votes

---

### 4. Determining the Winner

After all votes are cast:

* The program finds the **maximum number of votes**
* Any candidate who has that number of votes is printed
* This allows for **ties**, meaning multiple winners can be printed

---

## Functions Explained

### `bool vote(string name)`

* Compares the input name with all candidates
* Increases vote count if a match is found
* Returns `true` for a valid vote, `false` otherwise

### `void print_winner(void)`

* Finds the highest vote count
* Prints the name(s) of the candidate(s) with the most votes

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

## Error Handling

* If no candidates are provided, the program exits with a usage message
* If the number of candidates exceeds 9, the program exits with an error
* Invalid votes are rejected with a warning message

---

## Key Concepts Used

* Structs
* Arrays
* String comparison (`strcmp`)
* Command-line arguments (`argc`, `argv`)
* Loops and conditionals
* User input with CS50 library

---

## Conclusion

This program correctly simulates a plurality election by collecting votes, validating them, counting totals, and printing the correct winner(s). It follows the rules of plurality voting and handles ties properly.

---
