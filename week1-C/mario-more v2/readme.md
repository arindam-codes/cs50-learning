# Mario (Week 1 – CS50x)

This folder contains my implementation of the **Mario pyramid problem** from
CS50 Week 1, written in **C**.

The goal of this problem is to practice:
- Loops (nested loops)
- Conditionals
- Functions and abstraction
- Clean program design

---

## 🧠 Approach

I started with a basic version that printed blocks directly using loops.
From there, I iteratively improved the design by:

- Identifying repeated logic
- Abstracting repeated behavior into functions
- Making the code more readable and reusable
- Separating *what* is printed from *how* it is printed

This version represents an **improved design**, not a one-shot solution.

---

## 🧩 Key Ideas Used

- **Nested loops** to control rows and columns
- **Right alignment** using leading spaces
- **Function abstraction** to avoid repetition
- **Parameterization** so the pyramid works for any height

---

## 🛠️ Functions

### `mario(int height)`
Prints a Mario-style pyramid of the given height.

### `print_char(char c, int count)`
Prints a given character `c`, `count` number of times.
This function is used to print:
- spaces
- bricks (`#`)
- gaps

This abstraction made the main logic much clearer.

---

## 📌 Example Output (height = 4)
```
Height: 4
   #  #
  ##  ##
 ###  ###
####  ####
```
