# Stream Manipulator - Boolean

## Formatting Boolean Types
- Default when displaying boolean boolean values is 1 or 0
- Sometimes the strings true or false are more appropriate

**Example:**

here is the default behavior

```cpp
std::cout << (10 == 10) << std::endl;
std::cout << (10 == 20) << std::endl;
```

On console, it will display

```console
1
0
```

If formatting boolean types

```cpp
std::cout << std::boolalpha;

std::cout << (10 == 10) << std::endl;
std::cout << (10 == 20) << std::endl;
```

The following will be displayed

```console
true
false
```

----

