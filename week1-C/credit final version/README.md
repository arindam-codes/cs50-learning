# Credit Card Validator (CS50 – Credit)

This program validates a credit card number and determines whether it belongs to **VISA**, **AMEX**, **MASTERCARD**, or is **INVALID**, using **Luhn’s Algorithm**.

It is written in **C** as part of Harvard’s **CS50** problem set.

---

## 📌 Problem Overview

Given a credit card number, the program:

1. Validates the number using **Luhn’s checksum algorithm**
2. Determines the card type based on:

   * Length of the number
   * Starting digits
3. Prints **exactly one line** of output:

   * `VISA`
   * `AMEX`
   * `MASTERCARD`
   * `INVALID`

---

## 🧠 Key Concepts Used

* `get_long` for safe numeric input
* Conversion of numbers to strings using `sprintf`
* Character-to-digit conversion using ASCII math (`'0'`)
* String indexing and length checking
* Modular arithmetic for checksum validation
* Function decomposition and clean program design

---

## 🧮 Luhn’s Algorithm (Brief)

1. Starting from the **second-to-last digit**, multiply every other digit by 2
2. If the result is greater than 9, add its digits together
3. Add this sum to the sum of the remaining digits
4. If the total is divisible by 10, the card is valid

---

## 🧩 Program Structure

### `main`

* Prompts the user for a credit card number
* Converts it to a string
* Computes the checksum
* Prints the card type

### `sum_even_places`

* Handles digits in even positions (from the right)
* Applies Luhn’s doubling logic

### `sum_odd_places`

* Sums digits in odd positions (from the right)

### `determine_card_type`

* Checks:

  * checksum validity
  * card length
  * starting digits
* Returns the card type as a string

---

## ▶️ Usage

Compile and run:

```bash
make credit
./credit
```

Example:

```text
Number: 4003600000000014
VISA
```

Invalid example:

```text
Number: 6176292929
INVALID
```

---

## ✅ Supported Card Types

| Card Type  | Length   | Starting Digits |
| ---------- | -------- | --------------- |
| VISA       | 13 or 16 | 4               |
| AMEX       | 15       | 34 or 37        |
| MASTERCARD | 16       | 51–55           |

All other valid or invalid numbers are reported as `INVALID`.

---

## 🏁 Final Notes

* The program passes **check50 (17/17)** and **style50 (1.00)**
* Output format strictly matches CS50 requirements
* Code is structured for clarity and correctness rather than shortcuts

This problem provided deep insight into how characters, numbers, memory, and validation logic work together at a low level in C.

---

# Credit Card Validator (CS50 – Credit)

This program validates a credit card number and determines whether it belongs to **VISA**, **AMEX**, **MASTERCARD**, or is **INVALID**, using **Luhn’s Algorithm**.

It is written in **C** as part of Harvard’s **CS50** problem set.

---

## 📌 Problem Overview

Given a credit card number, the program:

1. Validates the number using **Luhn’s checksum algorithm**
2. Determines the card type based on:

   * Length of the number
   * Starting digits
3. Prints **exactly one line** of output:

   * `VISA`
   * `AMEX`
   * `MASTERCARD`
   * `INVALID`

---

## 🧠 Key Concepts Used

* `get_long` for safe numeric input
* Conversion of numbers to strings using `sprintf`
* Character-to-digit conversion using ASCII math (`'0'`)
* String indexing and length checking
* Modular arithmetic for checksum validation
* Function decomposition and clean program design

---

## 🧮 Luhn’s Algorithm (Brief)

1. Starting from the **second-to-last digit**, multiply every other digit by 2
2. If the result is greater than 9, add its digits together
3. Add this sum to the sum of the remaining digits
4. If the total is divisible by 10, the card is valid

---

## 🧩 Program Structure

### `main`

* Prompts the user for a credit card number
* Converts it to a string
* Computes the checksum
* Prints the card type

### `sum_even_places`

* Handles digits in even positions (from the right)
* Applies Luhn’s doubling logic

### `sum_odd_places`

* Sums digits in odd positions (from the right)

### `determine_card_type`

* Checks:

  * checksum validity
  * card length
  * starting digits
* Returns the card type as a string

---

## ▶️ Usage

Compile and run:

```bash
make credit
./credit
```

Example:

```text
Number: 4003600000000014
VISA
```

Invalid example:

```text
Number: 6176292929
INVALID
```

---

## ✅ Supported Card Types

| Card Type  | Length   | Starting Digits |
| ---------- | -------- | --------------- |
| VISA       | 13 or 16 | 4               |
| AMEX       | 15       | 34 or 37        |
| MASTERCARD | 16       | 51–55           |

All other valid or invalid numbers are reported as `INVALID`.

---

## 🏁 Final Notes

* The program passes **check50 (17/17)** and **style50 (1.00)**
* Output format strictly matches CS50 requirements
* Code is structured for clarity and correctness rather than shortcuts

This problem provided deep insight into how characters, numbers, memory, and validation logic work together at a low level in C.

---

*CS50 Credit — completed successfully.*

