# Advanced Scientific Calculator in C

A command-line scientific calculator built in C that supports both basic arithmetic (`+ - * /`) and advanced operations such as power (`^`), factorial (`!`), trigonometric functions (`sin, cos, tan`), logarithms (`ln, log10`), square root, and exponential (`e^x`).

## Features
- Operator-based input (e.g., `+`, `-`, `*`, `/`, `^`, `!`) instead of menu numbers.
- Handles error cases (division by zero, invalid log/sqrt, negative factorial).
- Supports trigonometric functions in degrees for user-friendliness.
- Clean modular design using separate functions for each operation.


## Build & Run
```bash
gcc calculator.c -o calculator -lm
./calculator

🚀 Ideal as a beginner-to-intermediate C project showcasing structured programming, function decomposition, math library usage, and error handling.
