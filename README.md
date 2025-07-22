# printf clone
## 📌 Description
This project is a custom implementation of the standard C `printf` function.
The `_printf()` function provides formatted output conversion and printing, supporting the following format specifiers:

- `%c` : Character
- `%s` : String
- `%d`, `%i` : Signed integer

This project was developed as our first group project in Holberton School.
It purpose is to deepen understanding of variadic functions, string manipulation, output formatting in C in peer coding environnement.

## 🚀 Getting Started
### ✅ Prerequisites
- GCC (version 13.3.0 or higher recommended)
- Make (optional, for easier compilation)
- Unix-like OS (tested on Arch Linux and Windows via WSL)

### 🛠️ Technologies Used
[![C](https://img.shields.io/badge/C-00599C?logo=c&logoColor=white)](#)
[![GitHub](https://img.shields.io/badge/GitHub-%23121011.svg?logo=github&logoColor=white)](#)
[![Arch Linux](https://img.shields.io/badge/Arch%20Linux-1793D1?logo=arch-linux&logoColor=fff)](#)
[![Windows](https://custom-icon-badges.demolab.com/badge/Windows-0078D6?logo=windows11&logoColor=white)](#)

## 📥 Installation

1. **Clone the repository:**
   ```sh
   git clone https://github.com/flor4/holbertonschool-printf
   cd holbertonschool-printf
   ```
2. **Compile the source files:**
   ```sh
   gcc -Wall -Werror -Wextra -pedantic *.c -o printf
   ```
   This will generate an executable named `printf`.

## 💡 Usage

You can use `_printf()` in your C programs as a drop-in replacement for the standard `printf` (with limited format support).

**Example:**

```c
#include "main.h"

int main(void)
{
    _printf("Character: %c\n", 'A');
    _printf("String: %s\n", "Hello, World!");
    _printf("Integer: %d\n", 123);
    _printf("Integer (i): %i\n", -456);
    return 0;
}
```

**Supported format specifiers:**
- `%c` : Print a single character
- `%s` : Print a string
- `%d`, `%i` : Print a signed integer

## 📁 Project Structure
```txt
.
├── README.md
├── _print_char.c
├── _print_integer.c
├── _print_string.c
├── _printf.c
├── _putchar.c
├── main.c
├── main.h
└── man_3_printf
```

## 👥 Authors
- [Franck S.](https://github.com/Franck-dev-hub)
- [Flora S.](https://github.com/flor4)

## 📜 License
This project is licensed under the GNU GPL v3.0. See the LICENSE.txt file for details.

## <a href="https://www.holbertonschool.com" target="_blank" rel="noopener noreferrer" style="display: inline-flex; align-items: center; gap: 6px;"><img src="https://cdn.prod.website-files.com/6105315644a26f77912a1ada/611e13a82c74407dfebd313f_semi-logo-holberton-01.svg" alt="Holberton" width="24" height="24" style="vertical-align: middle;" /></a>. Acknowledgments
 - Made with love for [Holberton](https://www.holbertonschool.com/) bisous.