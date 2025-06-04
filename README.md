# 🔢 C++ Module 02 – Fixed-Point Numbers, Operator Overloading & BSP

This module introduced **operator overloading**, the **Orthodox Canonical Form**, and the concept of **fixed-point arithmetic** in C++. It also included practical geometric logic via Binary Space Partitioning (BSP). A very math-heavy but rewarding experience!

---

## 📁 Exercises Overview

### 🧱 ex00 – Orthodox Canonical Form

- Create a `Fixed` class representing a fixed-point number.
- Implements:
  - Default constructor
  - Copy constructor
  - Copy assignment operator
  - Destructor
- Basic methods: `getRawBits()` and `setRawBits()`

---

### 🔧 ex01 – Converting Fixed-Point Values

- Add:
  - `Fixed(int)` constructor
  - `Fixed(float)` constructor
  - `toFloat()` and `toInt()` methods
- Overload `<<` to output the floating-point representation.

---

### ➕ ex02 – Operator Overloading

- Overload:
  - Comparison: `>`, `<`, `>=`, `<=`, `==`, `!=`
  - Arithmetic: `+`, `-`, `*`, `/`
  - Increment/Decrement: `++`, `--` (pre and post)
- Add static methods:
  - `Fixed::min(...)`
  - `Fixed::max(...)`

---

### 📐 ex03 – BSP (Binary Space Partitioning)

- Create a `Point` class using `Fixed` coordinates.
- Implement the function:
  ```cpp
  bool bsp(Point const a, Point const b, Point const c, Point const point);
  ```
- Determine if a point is inside a triangle using barycentric technique or vector cross products.

---

## 🛠️ Build Instructions

```bash
make
```

Each exercise is located in its own directory: `ex00/`, `ex01/`, etc.

---
