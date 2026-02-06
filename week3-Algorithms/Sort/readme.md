# Sort

## Overview

This project analyzes three unknown sorting programs (`sort1`, `sort2`, `sort3`) by measuring their performance on different types of input files.
Based on runtime behavior, the goal is to determine which classic sorting algorithm each program implements.

The inputs include:

* Random numbers
* Reversed numbers
* Already sorted numbers

File sizes go up to **50,000 elements**.

---

## Files

### Programs

* `sort1` – Unknown sorting algorithm
* `sort2` – Unknown sorting algorithm
* `sort3` – Unknown sorting algorithm

### Input Files

* `random5000.txt`, `random10000.txt`, `random50000.txt`
* `reversed5000.txt`, `reversed10000.txt`, `reversed50000.txt`
* `sorted5000.txt`, `sorted10000.txt`, `sorted50000.txt`

### Output

* `answers.txt` – Final identification of each sorting algorithm with explanation and timing data

---

## Identified Algorithms

| Program | Algorithm      |
| ------- | -------------- |
| sort1   | Bubble Sort    |
| sort2   | Merge Sort     |
| sort3   | Selection Sort |

---

## Reasoning

### sort1 → Bubble Sort

* Very slow on **random** and **reversed** inputs
* Extremely fast on **already sorted** input
* This matches **Bubble Sort with early-exit optimization**, which runs in **Ω(n)** for sorted data and **O(n²)** otherwise

### sort3 → Selection Sort

* Consistently slow across **sorted**, **reversed**, and **random** inputs
* Selection Sort always performs **O(n²)** comparisons regardless of input order
* No best-case improvement

### sort2 → Merge Sort

* Fastest in all cases
* Performance is nearly identical for random, reversed, and sorted inputs
* Matches **Merge Sort**, which runs in **Θ(n log n)** for all cases

---

## Timing Results (50,000 elements)

### Random Input

* sort1: ~5.065s
* sort3: ~1.768s
* sort2: ~0.035s

### Reversed Input

* sort1: ~4.379s
* sort3: ~2.079s
* sort2: ~0.034s

### Sorted Input

* sort1: ~0.032s
* sort3: ~2.546s
* sort2: ~0.029s

---

## Conclusion

By comparing runtime behavior across different input patterns and sizes:

* **Bubble Sort** is identified by its fast best-case and slow worst-case
* **Selection Sort** is identified by consistently poor performance
* **Merge Sort** is identified by consistently fast performance independent of input order

This analysis confirms:

```
sort1 = Bubble Sort
sort2 = Merge Sort
sort3 = Selection Sort
```

---
