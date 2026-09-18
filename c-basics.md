# C Programming Basics - Documentation

## 1. Data Types
| Data Type | Description |
| :--- | :--- |
| `int` | Stores whole numbers without decimals. |
| `float` | Stores single-precision floating-point numbers. |
| `double` | Stores double-precision floating-point numbers with higher precision. |
| `char` | Stores a single character. |
| `bool` | Stores boolean values (`true` or `false`). |
| `void` | Represents the absence of type or value. |

## 2. Format Specifiers
| Format Specifier | Description |
| :---: | :--- |
| `%d` | Signed decimal integer |
| `%u` | Unsigned decimal integer |
| `%o` | Octal integer |
| `%x` | Hexadecimal integer (lowercase) |
| `%X` | Hexadecimal integer (uppercase) |
| `%f` | Floating-point number |
| `%e` | Exponential / Scientific notation |
| `%c` | Single character |
| `%s` | String of characters |
| `%ld` | Long decimal integer |

## 3. Input/Output Functions
* **`printf()`**: Displays formatted output to the console.
* **`scanf()`**: Reads formatted input from standard input.
* **`getchar()`**: Reads a single character from standard input.
* **`putchar()`**: Displays a single character to the console.
* **`fgets()`**: Safely reads a string including spaces from standard input.
* **`puts()`**: Outputs a string followed by a newline character.

## 4. Escape Sequences
1. `\n` : Newline character (moves cursor to next line).
2. `\t` : Horizontal Tab (adds space for alignment).
3. `\\` : Backslash character
4. '\\' : double quotation mark
5. `\r` : Carriage return.

## 5. Precision in Floating-Point Output
Precision controls the number of digits printed after the decimal point. In C, precision is specified by adding a dot `.` and a number between `%` and `f` (e.g., `%.2f` for two decimal places).
