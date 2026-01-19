# From `s[i] - '0'` to Binary, ASCII & How Computers Think 🧠⚙️

> **How a single line of C code opened up characters, numbers, binary, ASCII, the compiler, and the CPU.**

---

## 🚀 Motivation

While solving the **CS50 Credit** problem, I encountered this line:

```c
int digit = s[i] - '0';
```

At first, it looked like a random trick.

But digging into *why* this works led me down a rabbit hole of:

* Binary representation
* ASCII encoding
* `char` vs `int`
* Compiler vs CPU responsibilities
* How `printf("%c")` and `printf("%d")` work
* How keyboards send input to programs

This repository documents that understanding.

---

## 🧩 The Core Insight

Computers **do not store characters or numbers**.

They store **bits**.

```
01000001
```

That same bit pattern can mean:

| Interpretation   | Meaning |
| ---------------- | ------- |
| Integer (`%d`)   | 65      |
| Character (`%c`) | 'A'     |
| Hex (`%x`)       | 41      |

> **Meaning comes from interpretation, not storage.**

---

## 🔤 Characters vs Numbers (ASCII)

### Numeric values

```
0 → 00000000
7 → 00000111
```

### Character values (ASCII)

```
'0' → 48 → 00110000
'7' → 55 → 00110111
```

So when a user types `7` on the keyboard, the program receives:

```
'7' = 00110111
```

❌ NOT `00000111`

---

## 🔁 Why `s[i] - '0'` Works

```c
int digit = s[i] - '0';
```

Binary math:

```
'7'  = 00110111  (55)
'0'  = 00110000  (48)
------------------
digit = 00000111  (7)
```

This converts a **character digit** into a **numeric value**.

This is exactly how:

* `atoi`
* `scanf`
* parsers
* interpreters

work internally.

---

## 🧠 `char` Is Not a Character

In C:

```c
char a = 'A';
```

What is stored in memory?

```
01000001
```

That is **65**.

* `%c` → prints `'A'`
* `%d` → prints `65`

Same bits. Different interpretation.

---

## 🛠 Who Knows What?

| Component                     | Knows                  |
| ----------------------------- | ---------------------- |
| CPU                           | Only binary            |
| RAM                           | Only binary            |
| Compiler                      | ASCII, types, sizes    |
| C standard library (`printf`) | How to interpret bits  |
| Terminal                      | How to draw characters |
| Human                         | Meaning                |

The compiler is the **translator**, not the thinker.

---

## ⌨️ Keyboard → Screen Pipeline

1. Keyboard sends scan code
2. OS converts it to ASCII
3. Program receives characters
4. Code converts characters to numbers
5. `printf` interprets bits based on format

---

## 🔒 Key Takeaways

* `'7'` ≠ `7`
* `"7"` ≠ `'7'`
* `char` is a **1-byte integer**
* Computers never see letters
* Interpretation creates meaning
* One line of C can reveal the whole stack

---

## 📚 Why This Matters

Understanding this removes fear of:

* pointers
* segmentation faults
* buffer overflows
* compilers
* low-level systems

This is where **real computer science** starts.

---

## ✨ Origin

All of this came from deeply questioning:

```c
int digit = s[i] - '0';
```

---

## 🧠 Author

Learning C the hard way.
One bit at a time.

---

> *“The computer doesn’t know characters.
> It only knows voltage.”*
