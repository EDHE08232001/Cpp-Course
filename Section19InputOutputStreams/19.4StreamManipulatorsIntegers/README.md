# Stream Manipulators: Integers

## Formatting Integer Types
* Default when displaying integer values is:
    - dec (base 10)
    - noshowbase - prefix used to show hex or octal
    - nouppercase - when displaying a prefix and hex values it will be lower case
    - noshowpos - no '+' is displayed for positive numbers
* These manipulators affect all fuether output to the stream

Formatting integer types - setting base

```cpp
int num {255};

std::cout << std::dec << num << std::endl;
std::cout << std::hex << num << std::endl;
std::cout << std::oct << num << std::endl;
```

The following will be displayed

```console
255
ff
377
```

However, if wee add `std::cout << std::showbase` before 3 std::cout lines, prefix will be added

like

```console
255
0xff
0377
```

***Note:* is the prefix for hexdecimal, and 0 is the prefix for octal!!!**