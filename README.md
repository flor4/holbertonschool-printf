# printf clone
## 📌 Description
This project is a custom implementation of the standard C printf function.
the \_printf() function handles formatted output conversion and printing,
supporting a variety of <a href="format">format specifiers</a>.
It was developed as our first group project at Holberton School,
with the goal of deepening our understanding of variadic functions, string manipulations,
and output formatting in C, all within a peer programming environment.

## 🚀 Getting Started
### ✅ Prerequisites
- GCC (version 13.3.0 or higher recommended)
- Make (optional, for easier compilation)
- Unix-like OS (tested on [![Arch Linux](https://img.shields.io/badge/Arch%20Linux-1793D1?logo=arch-linux&logoColor=fff)](#), [![Ubuntu](https://img.shields.io/badge/Ubuntu-E95420?logo=ubuntu&logoColor=white)](#) and [![Windows](https://custom-icon-badges.demolab.com/badge/Windows-0078D6?logo=windows11&logoColor=white)](#)).

### 🛠️ Technologies Used
[![C](https://img.shields.io/badge/C-00599C?logo=c&logoColor=white)](#)
[![GitHub](https://img.shields.io/badge/GitHub-%23121011.svg?logo=github&logoColor=white)](#)
[![GCC](https://img.shields.io/badge/gcc-13.3.0-blue)

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
<span id="format">The following format specifiers</span>:

- `%c` : Character.
- `%s` : String.
- `%d`: signed integer.
- `%i`: Signed integer.
- `%%`: The percent character.
- `%u`: Unsigned integer.
- `%o`: Octal number.
- `%x`: Lower hexadecimal -0 to f-.
- `%X`: Upper hexadecimal -0 to F-.
- `%b`: Binary number.
- `%S`: Special characters in hexadecimal.
- `%p`: Pointer memory address.
- `%r`: Reverse a string.
- `%R`: Conversion of a string in ROT13 format.

## 📁 Project Structure
```txt
.
├── LICENSE
├── README.md
├── _print_ascii.c
├── _print_binary.c
├── _print_char.c
├── _print_integer.c
├── _print_lower_hexa.c
├── _print_memory.c
├── _print_octal.c
├── _print_reverse.c
├── _print_rot13.c
├── _print_string.c
├── _print_unsigned.c
├── _print_upper_hexa.c
├── _printf.c
├── _putchar.c
├── format_types.c
├── main.h
├── man_3_printf
└──
```

## 👥 Authors
- [Franck S.](https://github.com/Franck-dev-hub)
- [Flora S.](https://github.com/flor4)

## 📜 License
This project is licensed under the GNU GPL v3.0. See the LICENSE.txt file for details.

## <a href="https://www.holbertonschool.com" target="_blank" rel="noopener noreferrer" style="display: inline-flex; align-items: center; gap: 6px;"><img src="https://cdn.prod.website-files.com/6105315644a26f77912a1ada/611e13a82c74407dfebd313f_semi-logo-holberton-01.svg" alt="Holberton" width="24" height="24" style="vertical-align: middle;" /></a> Acknowledgments
Made with love for [Holberton](https://www.holbertonschool.com/) bisous.
