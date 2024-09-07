# Formatting Floating Point Types in C++

When working with floating-point numbers in C++, the way they are displayed can be controlled using various format manipulators. By default, when displaying floating-point values, C++ uses the following settings:

## Default Formatting for Floating Point Numbers

1. **`setprecision` (Default: 6 digits)**
   - This manipulator sets the number of significant digits to display. By default, it shows up to 6 digits. This includes both digits before and after the decimal point.
   - Example:
     ```cpp
     double num = 123.456789;
     std::cout << std::setprecision(6) << num; // Output: 123.457
     ```
   - **Note:** The precision applies to the total number of significant digits, not just the number of digits after the decimal.

2. **`fixed`**
   - This manipulator forces the output to be in fixed-point notation, which means it will always use a decimal point to represent the floating-point number.
   - It will also ensure that the number of digits after the decimal is exactly as specified by `setprecision`.
   - Example:
     ```cpp
     double num = 123.456789;
     std::cout << std::fixed << std::setprecision(2) << num; // Output: 123.46
     ```
   - **Note:** When `fixed` is set, `setprecision` controls the number of digits after the decimal point.

3. **`scientific`**
   - This manipulator formats the floating-point number in scientific notation (e.g., `1.234e+02`).
   - Example:
     ```cpp
     double num = 123.456789;
     std::cout << std::scientific << std::setprecision(3) << num; // Output: 1.235e+02
     ```
   - **Note:** The `setprecision` manipulator controls the number of digits after the decimal in scientific notation.

4. **`showpoint` and `noshowpoint` (Default: `noshowpoint`)**
   - `showpoint` forces the output to always display the decimal point and trailing zeros, even if the number is an integer or ends with zero.
   - `noshowpoint` (the default setting) hides the decimal point if the floating-point number has no fractional part.
   - Example:
     ```cpp
     double num = 123.0;
     std::cout << std::showpoint << num; // Output: 123.000
     std::cout << std::noshowpoint << num; // Output: 123
     ```

5. **`uppercase` and `nouppercase` (Default: `nouppercase`)**
   - `uppercase` will format the scientific notation's exponent (`e`) and the hexadecimal floating-point (`p`) parts as uppercase letters (`E` or `P`).
   - `nouppercase` (the default setting) keeps the exponent and hexadecimal parts in lowercase.
   - Example:
     ```cpp
     double num = 123.456789;
     std::cout << std::scientific << std::uppercase << num; // Output: 1.234568E+02
     ```

6. **`showpos` and `noshowpos` (Default: `noshowpos`)**
   - `showpos` forces the output to display a `+` sign in front of positive numbers.
   - `noshowpos` (the default setting) omits the `+` sign for positive numbers.
   - Example:
     ```cpp
     double num = 123.456;
     std::cout << std::showpos << num; // Output: +123.456
     ```

## Summary

- **`setprecision(n)`**: Sets the number of digits or decimal places.
- **`fixed`**: Displays in fixed-point notation.
- **`scientific`**: Displays in scientific notation.
- **`showpoint` / `noshowpoint`**: Shows or hides the decimal point for whole numbers.
- **`uppercase` / `nouppercase`**: Uses uppercase or lowercase for scientific notation or hexadecimal output.
- **`showpos` / `noshowpos`**: Displays or hides the `+` sign for positive numbers.

## Practical Example

Combining these manipulators can give you precise control over how your floating-point values are displayed:

```cpp
#include <iostream>
#include <iomanip>

int main() {
    double value = 123.456789;

    std::cout << std::fixed << std::setprecision(4) << value << std::endl; // Output: 123.4568
    std::cout << std::scientific << std::setprecision(2) << value << std::endl; // Output: 1.23e+02
    std::cout << std::showpoint << std::setw(10) << value << std::endl; // Output:  123.4568 (with decimal point always shown)
    std::cout << std::uppercase << std::scientific << value << std::endl; // Output: 1.234568E+02
    std::cout << std::showpos << std::fixed << value << std::endl; // Output: +123.456789
    return 0;
}
```

These formatting options are useful for controlling the appearance of output, especially when dealing with scientific data, financial calculations, or any other use case that requires precision and consistency in displaying numbers.