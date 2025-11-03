# 🧰 Libft — Your Own C Standard Library

[![42 Project Score](https://img.shields.io/badge/Score-125%2F100-success?style=for-the-badge&logo=42&logoColor=white)](https://github.com/mpadronrz/libft)
[![Language](https://img.shields.io/badge/Language-C-blue?style=for-the-badge)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Made at 42 Barcelona](https://img.shields.io/badge/School-42_Barcelona-black?style=for-the-badge&logo=42&logoColor=white)](https://www.42barcelona.com/)

---

### 📋 Table of Contents
1. [About the Project](#-about-the-project)
2. [Features](#-features)
3. [Usage](#-usage)

---

## 📖 About the Project

**Libft** is the first project at [42 Barcelona](https://www.42barcelona.com/) — an introduction to C programming and library building.  
The goal is to recreate standard C library functions and gain a deep understanding of pointers, memory allocation, and data management.

This library provides a strong foundation for future 42 projects, serving as your personal, portable version of the C standard library.

> **Grade:** 125/100 (with bonuses included)

---

## ✨ Features

- Reimplementation of key **C standard library** functions (`memcpy`, `strlen`, `strlcat`, etc.)
- **Memory management utilities** for safe allocation and manipulation
- **Linked list operations** (`t_list` struct with full set of functions)
- Fully modular and compatible with all 42 projects
- Includes **bonus part** (linked list management and additional helpers)

---

## ⚙️ Usage

1. Clone the repository:
   ```bash
   git clone https://github.com/mpadronrz/libft.git
   cd libft
   ```
2. Compile the library:
  ```bash
  make
```
This will create the libft.a static library containing all mandatory functions.
3. (Optional) Compile with bonus functions:
  ```bash
  make bonus
  ```
This includes additional utilities such as linked list functions (ft_lstnew, ft_lstadd_back, etc.), which can be very useful in later 42 projects.
4. Include it in your project:
  ```c
#include "libft.h"
```
5. Link the library when compiling:
   ```bash
   cc main.c -L. -lft -o prog
