# -String-Processing-Programs-in-c

C String Processing Programs

## Overview

This repository contains C programs demonstrating various string manipulation and processing techniques. These programs help in understanding character arrays, string handling functions, loops, and common string-based problem-solving approaches.

The programs are useful for:

- Beginners learning C programming
- College laboratory exercises
- Coding interview preparation
- Logic-building practice
- Understanding string manipulation concepts

---

## Programs Included

### 1. Reverse a String

This program accepts a string and displays it in reverse order.

#### Output Example

```text
Enter string:
Harsha

Reverse string:
ahsraH
```

#### Concepts Used

- Strings
- Character arrays
- strlen()
- Reverse traversal
- Loops

---

### 2. Palindrome Check Using strrev()

This program checks whether a string is a palindrome by creating a copy and reversing it using `strrev()`.

#### Output Example

```text
Enter string:
madam

Palindrome
```

#### Concepts Used

- String copy using strcpy()
- String reversal
- strcmp()
- Palindrome logic

**Note:** `strrev()` is compiler-dependent and may not work in GCC.

---

### 3. Palindrome Check Without strrev()

This program checks whether a string is a palindrome by comparing characters from both ends.

#### Output Example

```text
Enter string:
level

Palindrome
```

#### Concepts Used

- Strings
- Two-pointer logic
- Character comparison
- Palindrome checking

---

### 4. Count Vowels and Consonants

This program counts the number of vowels and consonants present in a string.

#### Output Example

```text
Enter string:
Embedded

Vowels = 3
Consonants = 5
```

#### Concepts Used

- String traversal
- Character checking
- Conditional statements
- Counters

---

### 5. Count Digits in a String

This program counts how many numeric digits are present inside a string.

#### Output Example

```text
Enter string:
abc123xyz

Digits = 3
```

#### Concepts Used

- Strings
- ASCII character checking
- Loops
- Counting logic

---

### 6. Count Uppercase and Lowercase Letters

This program counts uppercase and lowercase characters separately.

#### Output Example

```text
Enter string:
HarshaG

Uppercase = 2
Lowercase = 5
```

#### Concepts Used

- ASCII values
- String traversal
- Character classification
- Counters

---

## Technologies Used

- C Programming Language
- GCC Compiler
- VS Code
- CodeBlocks
- Turbo C

---

## Project Structure

```text
c-string-processing-programs/
│
├── reverse_string.c
├── palindrome_using_strrev.c
├── palindrome_without_strrev.c
├── count_vowels_consonants.c
├── count_digits.c
├── count_upper_lower.c
└── README.md
```

---

## How to Compile

Compile a program:

```bash
gcc filename.c -o output
```

Run:

```bash
./output
```

---

## Learning Outcomes

After completing these programs, you will understand:

- String handling in C
- Character array operations
- String library functions
- Palindrome algorithms
- Character classification
- String traversal techniques
- ASCII-based processing

---

## Future Improvements

Possible future additions:

- String reversal using functions
- String sorting
- String encryption and decryption
- Anagram checker
- Word counter
- String compression
- Custom string library functions

---

## Author

**Harsha G**

Learning:

- C Programming
- Embedded Systems
- Python Development
- IoT Systems
- Problem Solving
