# 🧩 Libft <a id="top"></a>

![Language](https://img.shields.io/badge/language-C-blue.svg)
![Project](https://img.shields.io/badge/project-Libft-9cf.svg)
![Score](https://img.shields.io/badge/score-125%2F100-brightgreen.svg)

---

## 🏫 About the Project <a id="about-the-project"></a>

**Libft** is the first project in the 42 curriculum.
It consists of recreating a simplified version of the C standard library and implementing additional utility functions that will be reused in future projects.

It reinforces fundamental programming concepts:

* Memory management (`malloc`, `free`)
* String and array manipulation
* Use of static libraries
* Function pointers and modular design
* Linked list data structures (bonus part)

The project is written in accordance with the **42 Norm**, ensuring clean, readable, and maintainable code.

>Peer-graded at **42Barcelona** with a final grade of **125/100**, including the bonus.

---

## 🚀 Features <a id="features"></a>

Libft is divided into three main sections: **Libc functions**, **Additional functions**, and **Bonus (linked list)**.

---

### 📘 Libc Functions

These functions replicate the behavior of the standard C library (`libc`).
For detailed descriptions, check their corresponding **man pages** (e.g. `man strlen`, `man memcpy`, etc.).

#### **Character checks**

* `ft_isalpha` — Checks if a character is alphabetic.
* `ft_isdigit` — Checks if a character is a digit (0–9).
* `ft_isalnum` — Checks if a character is alphanumeric.
* `ft_isascii` — Checks if a character is within the ASCII range.
* `ft_isprint` — Checks if a character is printable.

#### **Memory functions**

* `ft_memset` — Fills a block of memory with a specific byte.
* `ft_bzero` — Zeros out a block of memory.
* `ft_memcpy` — Copies bytes from one memory area to another.
* `ft_memmove` — Safely copies overlapping memory regions.
* `ft_memchr` — Scans memory for a specific byte.
* `ft_memcmp` — Compares two memory areas.
* `ft_calloc` — Allocates and zeros memory for an array.

#### **String manipulation**

* `ft_strlen` — Returns the length of a string.
* `ft_strlcpy` — Copies a string into a destination buffer with size limit.
* `ft_strlcat` — Appends one string to another with size limit.
* `ft_strdup` — Duplicates a string in newly allocated memory.
* `ft_strchr` — Locates the first occurrence of a character in a string.
* `ft_strrchr` — Locates the last occurrence of a character in a string.
* `ft_strnstr` — Searches for a substring within a string up to a given length.
* `ft_strncmp` — Compares two strings up to a given number of characters.

#### **Conversions**

* `ft_atoi` — Converts a string to an integer.
* `ft_toupper` — Converts a lowercase letter to uppercase.
* `ft_tolower` — Converts an uppercase letter to lowercase.

---

### 🧩 Additional Functions

Functions not included in `libc`, but essential for working with dynamic strings and memory in C projects.

#### **String and memory utilities**

* `ft_substr` — Extracts a substring from a string.
* `ft_strjoin` — Concatenates two strings into a new one.
* `ft_strtrim` — Removes specified characters from the beginning and end of a string.
* `ft_split` — Splits a string into an array of strings using a delimiter.
* `ft_itoa` — Converts an integer to a string.
* `ft_strmapi` — Applies a function to each character of a string (returns a new string).
* `ft_striteri` — Applies a function to each character of a string in place.

#### **File descriptor output**

* `ft_putchar_fd` — Outputs a character to a given file descriptor.
* `ft_putstr_fd` — Outputs a string to a given file descriptor.
* `ft_putendl_fd` — Outputs a string followed by a newline to a file descriptor.
* `ft_putnbr_fd` — Outputs an integer to a given file descriptor.

---

### 🪴 Bonus Part (Linked Lists)

Implements a basic linked list library using the `t_list` structure:

* `ft_lstnew` — Creates a new list node.
* `ft_lstadd_front` — Adds a new node at the beginning of the list.
* `ft_lstsize` — Returns the number of nodes in the list.
* `ft_lstlast` — Returns the last node of the list.
* `ft_lstadd_back` — Adds a new node at the end of the list.
* `ft_lstdelone` — Deletes a single node using a given function.
* `ft_lstclear` — Deletes and frees an entire list.
* `ft_lstiter` — Iterates over the list, applying a function to each element.
* `ft_lstmap` — Creates a new list by applying a function to each element of another list.

---

## 🛠️ Compilation <a id="compilation"></a>

Compile the library using:

```bash
make
```

This will generate `libft.a`, a static library containing all implemented functions.

To include the **bonus (linked list)** functions:

```bash
make bonus
```

To clean object files:

```bash
make clean
```

To remove everything (including the library):

```bash
make fclean
```

To recompile from scratch:

```bash
make re
```

You can use **libft** in any C project by including its header and linking the library:

```c
#include "libft.h"
```

Compile your program either with:

```bash
cc main.c -L. -lft -I. -Wall -Wextra -Werror -o prog
```

or

```bash
cc -Wall -Wextra -Werror main.c libft.a -o prog
```

---

## 🧠 How It Works <a id="how-it-works"></a>

Every function in **libft** is implemented from scratch, mimicking the behavior of standard C functions while adhering to the **42 Norm**.
This project strengthens your understanding of:

* Low-level memory operations
* Pointer arithmetic
* Efficient data manipulation
* Safe and modular C design

The **bonus linked list** section introduces dynamic data structures, highlighting proper memory allocation, traversal, and cleanup — essential skills for advanced C projects at 42.

