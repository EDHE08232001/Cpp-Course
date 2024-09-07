# Stream Manipulators: Integers

## Formatting Integer Types

When displaying integer values, the default formatting settings are:

- **dec** (base 10)
- **noshowbase**: No prefix is used to show hexadecimal (hex) or octal values.
- **nouppercase**: Hexadecimal values and their prefixes are displayed in lowercase.
- **noshowpos**: The '+' sign is not displayed for positive numbers.

These manipulators affect all further output to the stream until explicitly changed.

### Setting the Base for Integer Formatting

You can change the base of integer values in C++ using the following manipulators:

```cpp
int num {255};

std::cout << std::dec << num << std::endl;  // Decimal format (base 10)
std::cout << std::hex << num << std::endl;  // Hexadecimal format (base 16)
std::cout << std::oct << num << std::endl;  // Octal format (base 8)
```

The output will be:

```console
255
ff
377
```

However, if you add `std::cout << std::showbase` before these `std::cout` lines, a prefix will be added to indicate the base:

```cpp
std::cout << std::showbase;
std::cout << std::dec << num << std::endl;  // Decimal format (base 10)
std::cout << std::hex << num << std::endl;  // Hexadecimal format (base 16)
std::cout << std::oct << num << std::endl;  // Octal format (base 8)
```

The output will now be:

```console
255
0xff
0377
```

**Note:** `0x` is the prefix for hexadecimal, and `0` is the prefix for octal!

There are also other manipulators like `std::showpos` (to show the '+' sign for positive numbers) and `std::noshowpos` (to hide the '+' sign).

## Setting and Resetting Formatting Flags

### Setting Flags

To set specific formatting flags, use the `setf` function:

- `std::cout.setf(std::ios::showbase)` — Enables the prefix for octal and hex numbers.
- `std::cout.setf(std::ios::uppercase)` — Displays the 'X' in hexadecimal values in uppercase.
- `std::cout.setf(std::ios::showpos)` — Displays the '+' sign for positive numbers.

### Resetting Flags

To reset specific formatting flags, use the `resetiosflags` function:

- `std::cout.resetiosflags(std::ios::basefield)` — Resets the basefield formatting (dec, hex, oct).
- `std::cout.resetiosflags(std::ios::showbase)` — Disables the prefix for octal and hex numbers.
- `std::cout.resetiosflags(std::ios::showpos)` — Hides the '+' sign for positive numbers.