# Mario (More) – CS50 Week 1 (C)

This directory contains my **final implementation** of the **Mario (more)** problem
from **CS50 Week 1**, written in **C**.

The goal of this problem is to build a Mario-style pyramid while practicing:
- Loops (nested loops)
- Conditionals
- Functions and abstraction
- Input validation
- Clean program design in C

---

## 🧠 Problem Description

The program:
- Prompts the user for a **height between 1 and 8**
- Re-prompts if the input is invalid
- Prints a **double-sided Mario pyramid** with:
  - Right-aligned left half
  - Two spaces in the middle
  - Left-aligned right half

---

## 🛠️ Approach

I solved this problem iteratively:

1. Started by printing simple blocks using loops
2. Learned how to create right-aligned and left-aligned pyramids
3. Abstracted repeated logic into functions
4. Used a `do–while` loop to validate user input
5. Combined everything into a clean and readable solution

Rather than writing everything in `main`, I separated logic into functions
to improve clarity and design.

---

## 🔁 Input Validation

To ensure the user provides a valid height, I used a `do–while` loop:

- The program continues to prompt until the height is between **1 and 8**
- This guarantees correct behavior before printing the pyramid

---

## 🧩 Functions Used

### `mario(void)`
Handles:
- User input
- Input validation
- Printing the full Mario pyramid

### `print_char(int row)`
Prints `row` number of `#` characters.
This function is reused for both the left and right halves of the pyramid.

---

## 📌 Example Output (Height = 4)

```
   #  #
  ##  ##
 ###  ###
####  ####

```
# (Height = 8)
```
       #  #
      ##  ##
     ###  ###
    ####  ####
   #####  #####
  ######  ######
 #######  #######
########  ########

```
