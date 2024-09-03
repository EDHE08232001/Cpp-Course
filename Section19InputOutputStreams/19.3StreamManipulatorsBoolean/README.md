# Stream Manipulator - Boolean

## Formatting Boolean Types in C++

When displaying boolean values (`true` or `false`) in C++, the default format is numeric (`1` for `true` and `0` for `false`). However, there are situations where the string representation (`true` or `false`) is more readable and appropriate. 

C++ provides several stream manipulators and methods to control the formatting of boolean values when using `std::cout` for output.

### Example: Default Behavior

By default, C++ outputs boolean values as integers:

```cpp
std::cout << (10 == 10) << std::endl;  // Outputs: 1
std::cout << (10 == 20) << std::endl;  // Outputs: 0
```

### Formatting Boolean Values as Text

To change the output to display the boolean values as text (`true` or `false`), use the `std::boolalpha` manipulator:

```cpp
std::cout << std::boolalpha;

std::cout << (10 == 10) << std::endl;  // Outputs: true
std::cout << (10 == 20) << std::endl;  // Outputs: false
```

#### Explanation:

- **`std::boolalpha`**: A manipulator that switches the output format of boolean values to textual form (`true` or `false`). 
- **`std::noboolalpha`**: Resets the format back to the default numeric representation (`1` or `0`).

### Reverting Back to Default Formatting

To revert back to the numeric output format (1 or 0), use the `std::noboolalpha` manipulator:

```cpp
std::cout << std::noboolalpha; // Output will now be 1 or 0
```

### Alternate Method: Using `setf` and `unsetf`

You can also use member functions of the `ios` class to achieve the same effect:

- **Enable Textual Format**:
  ```cpp
  std::cout.setf(std::ios::boolalpha); // Enables the output format to be true/false
  ```
  
- **Disable Textual Format**:
  ```cpp
  std::cout.unsetf(std::ios::boolalpha); // Reverts the output format to 1/0
  ```

### Resetting the Boolean Format to Default

To reset the output format to its default state, use the `std::resetiosflags` function:

```cpp
std::cout << std::resetiosflags(std::ios::boolalpha);
```

#### Explanation:

- **`std::cout.setf(std::ios::boolalpha);`**: Sets the `boolalpha` flag, so boolean values are displayed as `true` or `false`.
- **`std::cout.unsetf(std::ios::boolalpha);`**: Clears the `boolalpha` flag, so boolean values are displayed as `1` or `0`.
- **`std::resetiosflags(std::ios::boolalpha);`**: Resets any stream flags set by `setf` (like `boolalpha`), restoring default behavior.