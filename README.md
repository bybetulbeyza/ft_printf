*This project has been created as part of the 42 curriculum by betdemir.*

# ft_printf

## Description

The goal of this project is to recode the popular and versatile C library function `printf()`. This project serves as an introduction to using variadic functions in C (functions that accept a variable number of arguments).

The `ft_printf` function mimics the original `printf()` and handles the following conversions:

* `%c` - Prints a single character.

* `%s` - Prints a string.

* `%p` - Prints a void pointer argument in hexadecimal format.

* `%d` - Prints a decimal (base 10) number.

* `%i` - Prints an integer in base 10.

* `%u` - Prints an unsigned decimal (base 10) number.

* `%x` - Prints a number in hexadecimal (base 16) lowercase format.

* `%X` - Prints a number in hexadecimal (base 16) uppercase format.

* `%%` - Prints a percent sign.

As per the project requirements, the original `printf()` buffer management is not implemented.

## Instructions

### Compilation

The project comes with a `Makefile` that complies with the project's strict rules. It compiles the source files into a static library named `libft_printf.a` using `cc` with the flags `-Wall -Wextra -Werror`.

To compile the library, simply run:

```
make

```

Available Makefile rules:

* `make all` or `make`: Compiles the `libft_printf.a` library.

* `make clean`: Removes all object files (`*.o`).

* `make fclean`: Removes object files and the `libft_printf.a` binary.

* `make re`: Performs a clean and recompiles the library.

### Execution / Usage

Include the header file in your C code:

```
#include "ft_printf.h"

```

Compile your project with the library:

```
cc my_program.c libft_printf.a -o my_program

```

## Resources

* **Documentation:**

* **Video Tutorial - ["understanding ft_printf" (nikito)](https://youtu.be/Hb2m7htiKWM?si=JzeFyJ3pwvU2Mghy):** A very helpful YouTube video providing a visual representation of how variadic macros (`va_list`, `va_start`, `va_arg`, `va_end`) operate under the hood.

* C Standard Library Documentation: Used for understanding the expected behavior of the original printf and formatting rules.

* **AI Usage Declaration:**

* AI Usage: Artificial Intelligence was used to assist in the initial structuring and drafting of this README.md file, ensuring all mandatory guidelines from the subject were met clearly and concisely.

## Algorithm and Data Structure

### Algorithm

The core algorithm relies on sequentially parsing the format string character by character:

1. Iterate through the `format` string.

2. If the current character is not `%`, output the character directly to the standard output and increment the printed character count.

3. If a `%` is encountered, inspect the immediately following character (the specifier).

4. Route the execution to a specific helper function based on the specifier (e.g., `ft_print_char`, `ft_print_string`, `ft_print_hex`).

5. Extract the corresponding argument using `va_arg` of the appropriate type.

6. Each helper function formats the argument, writes it to standard output, and returns the number of characters printed.

7. Add the returned length to the total character count.

### Data Structure

* **Variadic Lists:** The `va_list` data type from `<stdarg.h>` is used to manage the variable arguments passed to the function.

* **Routing Mechanism:** A simple `if-else if` block (or an array of function pointers) is utilized to map the conversion characters (`c`, `s`, `p`, `d`, `i`, `u`, `x`, `X`, `%`) to their respective formatting and printing functions.

* **State Tracking:** A simple integer counter is maintained throughout the recursive/iterative calls to track the total number of bytes written, mimicking the return value of the original `printf()`.