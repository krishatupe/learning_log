# C++ NOTES — DAY 1
### Topics: Boilerplate, Primitive Datatypes, Inputs, Type Conversion & Casting, Arithmetic Operators, ASCII Operations

---

## 1. BOILERPLATE CODE
Every C++ program starts with this structure:
```cpp
#include<iostream>   // gives access to cout, cin
using namespace std; // so you don't have to write std::cout every time

int main(){
    // your code goes here
    return 0;
}
```
- `#include<iostream>` — preprocessor directive, loads the input/output library
- `using namespace std;` — lets you use cout/cin without the std:: prefix
- `int main(){}` — the entry point, every program starts here
- `return 0;` — tells the computer the program ended successfully
- `;` — terminator, every statement ends with one

---

## 2. PRIMITIVE (FUNDAMENTAL) DATATYPES

| Type | What it holds | Size | Example |
|------|--------------|------|---------|
| `char` | Single character | 1 byte | `char a = 'A';` |
| `bool` | True or false | 1 byte | `bool x = false;` |
| `int` | Whole numbers | 4 bytes | `int a = 15;` |
| `float` | Decimal numbers (less precise) | 4 bytes | `float pi = 3.14f;` |
| `double` | Decimal numbers (more precise) | 8 bytes | `double x = 100.56;` |
| `string` | Words/sentences | 24 bytes | `string b = "boat";` |

**Key rules:**
- `char` uses **single quotes** `' '`
- `string` uses **double quotes** `" "`
- `bool` stores `true = 1` and `false = 0`
- `float` values need an `f` at the end: `3.14f`
- Use `sizeof(variable)` to check the size of any variable

---

## 3. OUTPUT — cout
```cpp
cout << "Hello World!" << endl;
cout << "Hello\n";   // \n also moves to next line
cout << endl;        // prints an empty line
```
- `<<` is the insertion operator, used to send data to output
- `\n` = new line (faster)
- `endl` = new line + flushes output buffer (slightly slower)
- You can chain multiple outputs: `cout << "A" << "B" << endl;`

---

## 4. INPUT — cin
```cpp
string name;
cin >> name;
```
- `>>` is the extraction operator, reads user input
- Always declare the variable **before** using cin
- cin stops reading at a space (for full sentences, use `getline`)

---

## 5. TYPE CONVERSION vs TYPE CASTING

### Type Conversion (Implicit — automatic)
The computer does it automatically, usually smaller → bigger type:
```cpp
char grade = 'A';
int value = grade;  // 'A' becomes 65 (its ASCII value)
```

### Type Casting (Explicit — you do it manually)
You force it yourself, usually bigger → smaller type:
```cpp
double num = 12.678;
int Num = (int)num;  // becomes 12, decimal is cut off (not rounded)
```
⚠️ Casting from double to int **truncates** (chops the decimal), it does NOT round.

---

## 6. ASCII
- Every character has a number value behind it called its **ASCII code**
- `'A'` = 65, `'a'` = 97, `'0'` = 48
- When you store a `char` in an `int`, you get its ASCII number
- You can do math with ASCII values (add, subtract, multiply, divide, remainder)

---

## 7. ARITHMETIC OPERATORS

| Operator | Meaning | Example |
|----------|---------|---------|
| `+` | Addition | `a + b` |
| `-` | Subtraction | `a - b` |
| `*` | Multiplication | `a * b` |
| `/` | Division (quotient) | `a / b` |
| `%` | Modulus (remainder) | `a % b` |

⚠️ `%` (modulus) only works on **integers**, not doubles or floats.

---

## 8. COMMENTS
```cpp
// This is a single line comment

/* This is a
   multi-line comment */
```
Comments can go **anywhere** in the file — inside or outside main().

---

## QUICK RECALL CHECKLIST
- [ ] Every program needs `#include<iostream>` and `int main()`
- [ ] `char` = one character in single quotes
- [ ] `string` = words/sentences in double quotes
- [ ] `bool` true=1, false=0
- [ ] `sizeof()` gives size in bytes
- [ ] Implicit conversion = automatic (small → big)
- [ ] Explicit casting = manual with `(type)` (big → small, decimals get cut)
- [ ] `char` stored in `int` gives ASCII value
- [ ] `%` only works on integers
- [ ] `cin >>` for input, `cout <<` for output

---

## 3 CODING IDEAS

**Q1.** Write a program that asks the user to enter their age as a `double` (e.g. 17.9), then type cast it to an `int` and display: `"Your age in whole number is X"`

**Q2.** Write a program that asks the user to enter two integers, then displays all 5 arithmetic results (sum, difference, product, quotient AND remainder).

**Q3.** Write a program that asks the user to enter a character, then displays its ASCII value, and also displays what the character would be if you added 1 to its ASCII value. (Hint: `'A' + 1 = 'B'`)
