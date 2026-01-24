

#  Pattern Questions in C++

A curated collection of **C++ pattern problems** designed to strengthen your understanding of **loops, nested loops, and logical thinking**.
This repository is beginner-friendly and commonly used for **DSA preparation, interviews, and coding fundamentals**.

---

## 📂 Repository Structure

```
.
├── assets/                # Images for pattern outputs
├── 01-pattern.cpp
├── 02-pattern.cpp
├── ...
├── 22-pattern.cpp
├── iteration-loop.cpp
└── README.md
```

Each file demonstrates a **single pattern problem** with a clear looping approach.

---

## 🧠 What You’ll Learn

* Nested loops in C++
* Pattern logic & symmetry
* Time complexity intuition
* Output formatting
* Problem-solving fundamentals

---

## 📸 Pattern Preview

### Pattern 1 to Pattern 22

| Pattern    | Preview                                                         |
| ---------- | --------------------------------------------------------------- |
| Pattern 1  | ![P1](assets/P1.png)                                            |
| Pattern 2  | ![P2](assets/P2.png)                                            |
| Pattern 3  | ![P3](assets/P3.png)                                            |
| Pattern 4  | ![P4](assets/P4.png)                                            |
| Pattern 5  | ![P5](assets/P5.png)                                            |
| Pattern 6  | ![P6](assets/P6.png)                                            |
| Pattern 7  | ![P7](assets/P7.png)                                            |
| Pattern 8  | ![P8](assets/P8.png)                                            |
| Pattern 9  | ![P9](assets/P9.png)                                            |
| Pattern 10 | ![P10](assets/P10.png)                                          |
| Pattern 11 | ![P11](assets/P11.png)                                          |
| Pattern 12 | ![P12](assets/P12.png)                                          |
| Pattern 13 | ![P13](assets/P13.png)                                          |
| Pattern 14 | ![P14](assets/P14.png)                                          |
| Pattern 15 | ![P15](assets/P15.png)                                          |
| Pattern 16 | ![P16](assets/P16.png)                                          |
| Pattern 17 | ![P17](assets/P17.png)                                          |
| Pattern 18 | ![P18](assets/P18.png)                                          |
| Pattern 19 | ![P19](assets/P19.png)                                          |
| Pattern 20 | ![P20](assets/P20.png)                                          |
| Pattern 21 | ![P22](assets/P22.png)                                          |
| Pattern 22 | ![Screenshot](assets/Screenshot-2023-01-02-at-1.54.55-PM-1.jpg) |

---

## 🧾 Pattern Explanations (Simple & Clear)

Each section below explains:

* **What the pattern prints**
* **How it works**
* **Example output**
* **Time complexity**

---

### Pattern 1 — `01-pattern.cpp`

**Description:**
Prints a square of `*` with `n` rows and `n` columns.

**Logic:**
Two nested loops:

* Outer loop → rows
* Inner loop → columns

**Example (n = 4):**

```
****
****
****
****
```

**Time Complexity:** `O(n²)`

---

### Pattern 2 — `02-pattern.cpp`

**Description:**
Right-angled triangle where row `i` contains `i` stars.

**Note:**
The current loop starts from `0`, so the first line is empty.
Starting from `1` removes the empty line.

**Example (n = 4):**

```
*
**
***
****
```

**Time Complexity:** `O(n²)`

---

### Pattern 3 — `03-pattern.cpp`

**Description:**
Each row prints numbers from `1` to `i`.

**Example (n = 4):**

```
1
12
123
1234
```

**Time Complexity:** `O(n²)`

---

### Pattern 4 — `04-pattern.cpp`

**Description:**
Row `i` prints the number `i`, repeated `i` times.

**Example (n = 4):**

```
1
22
333
4444
```

**Time Complexity:** `O(n²)`

---

### Pattern 5 — `05-pattern.cpp`

**Description:**
Inverted right-angled triangle of stars.

**Example (n = 4):**

```
****
***
**
*
```

**Time Complexity:** `O(n²)`

---

### Pattern 6 — `06-pattern.cpp`

**Description:**
Prints decreasing sequences of numbers starting from `1`.

**Example (n = 4):**

```
1234
123
12
1
```

**Time Complexity:** `O(n²)`

---

### Pattern 7 — `07-pattern.cpp`

**Description:**
Centered pyramid using `*`.

**Logic:**

* Spaces: `n - i`
* Stars: `2*i - 1`

**Example (n = 4):**

```
   *
  ***
 *****
*******
```

**Time Complexity:** `O(n²)`

---

### Pattern 8 — `08-patttern.cpp`

**Description:**
Inverted version of Pattern 7.

**Example (n = 4):**

```
*******
 *****
  ***
   *
```

**Time Complexity:** `O(n²)`

---

### Pattern 9 — `09-pattern.cpp`

**Description:**
Diamond-like structure using `*` with `-` as padding.

**Logic:**

* First half increases
* Second half decreases

**Time Complexity:** `O(n²)`

---

### Pattern 10 — `10-pattern.cpp`

**Description:**
Triangle grows to `n` stars then shrinks.

**Example (n = 4):**

```
*
**
***
****
***
**
*
```

**Time Complexity:** `O(n²)`

---

### Pattern 11 — `11-pattern.cpp`

**Description:**
Alternating `1` and `0` pattern.

**Example (n = 4):**

```
1
01
101
0101
```

**Time Complexity:** `O(n²)`

---

### iteration-loop.cpp — Nested Loop Demo

**Purpose:**
Helps visualize how nested loops execute.

**Output Example:**

```
this is i 0
this is j>> 0 this is j>> 1 this is j>> 2 this is j>> 3
```

**Use Case:**
Understanding loop flow for beginners.

---

## 📝 Notes

* All patterns use **nested loops**
* **Time Complexity:** `O(n²)`
* **Space Complexity:** `O(1)` (excluding output)

---

## 🚀 Who Is This For?

* Beginners in C++
* DSA & interview prep
* Anyone struggling with loop logic
* College practicals & exams

---

## ⭐ Support

If this repo helped you:

* ⭐ Star the repository
* 🍴 Fork it
* 🧠 Practice variations

Happy Coding! 🚀
