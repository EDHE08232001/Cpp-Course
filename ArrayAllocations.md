In C++, both `int arr[3] {1, 2, 3}` and `int *arr = new int[3] {1, 2, 3}` are ways to create and initialize arrays, but they have different characteristics in terms of memory allocation, lifespan, and management. Let's look at the differences between these two:

### `int arr[3] {1, 2, 3}`

- **Type**: This is a statically allocated array, also known as an automatic array.
- **Memory Allocation**: The array is allocated on the stack. The memory for this array is automatically managed by the compiler, and it is freed when it goes out of scope (typically when the block or function in which it is declared ends).
- **Initialization**: The array is initialized with the values `{1, 2, 3}`.
- **Scope and Lifetime**: The array's memory is automatically deallocated when the function or block in which it is declared ends. This makes it a good choice for local and temporary data storage.
- **Size**: The size of the array is fixed at compile-time (`3` in this case). You cannot change the size after declaration.
- **Usage Example**:

  ```cpp
  int arr[3] {1, 2, 3}; // Statically allocated array

  for (int i = 0; i < 3; ++i) {
      std::cout << arr[i] << " ";  // Outputs: 1 2 3
  }
  ```

### `int *arr = new int[3] {1, 2, 3}`

- **Type**: This is a dynamically allocated array.
- **Memory Allocation**: The array is allocated on the heap using the `new` operator. This memory allocation is controlled manually and must be managed by the programmer.
- **Initialization**: The array is initialized with the values `{1, 2, 3}`.
- **Scope and Lifetime**: The array will persist until it is explicitly deallocated using the `delete[]` operator. This gives more control over the array's lifetime but also makes it the programmer's responsibility to free the memory.
- **Size**: The size is specified at runtime (though, in this example, it is `3`), and you can determine the size dynamically. The size cannot be changed after the allocation, but you can allocate a different size by reassigning the pointer.
- **Manual Memory Management**: You must explicitly release the memory with `delete[]` to avoid memory leaks.
- **Usage Example**:

  ```cpp
  int *arr = new int[3] {1, 2, 3}; // Dynamically allocated array

  for (int i = 0; i < 3; ++i) {
      std::cout << arr[i] << " ";  // Outputs: 1 2 3
  }

  delete[] arr; // Free the dynamically allocated memory
  ```

### Key Differences

| Feature                    | `int arr[3] {1, 2, 3}`               | `int *arr = new int[3] {1, 2, 3}`              |
|----------------------------|--------------------------------------|-----------------------------------------------|
| **Memory Location**        | Stack (automatic storage duration)    | Heap (dynamic storage duration)               |
| **Initialization**         | Compile-time initialization           | Run-time initialization                       |
| **Memory Management**      | Automatic (handled by the compiler)   | Manual (handled by the programmer using `new` and `delete[]`) |
| **Scope and Lifetime**     | Limited to the scope in which it's declared | Persists until `delete[]` is called            |
| **Size Determination**     | Fixed at compile-time                 | Can be determined at runtime                  |
| **Performance**            | Faster allocation and deallocation    | Slower due to dynamic memory management       |
| **Safety**                 | Safer (no manual memory management)   | Prone to memory leaks if `delete[]` is not called |
| **Flexibility**            | Less flexible                         | More flexible, can allocate at runtime        |

### When to Use Each

- **Use `int arr[3] {1, 2, 3}` (static allocation)**:
  - When the size of the array is known at compile time and does not need to change.
  - When you want automatic memory management (e.g., local variables inside a function).
  - When performance is critical, as stack allocation is faster and safer.

- **Use `int *arr = new int[3] {1, 2, 3}` (dynamic allocation)**:
  - When the size of the array needs to be determined at runtime.
  - When the array's lifetime must extend beyond the scope in which it was created (e.g., when returning an array from a function).
  - When you need to create a large array that may not fit in the limited stack space.

### Summary

- `int arr[3] {1, 2, 3}` creates a static array on the stack, which is automatically managed and has a limited lifetime within its scope.
- `int *arr = new int[3] {1, 2, 3}` creates a dynamic array on the heap, which must be manually managed and can have a flexible size and extended lifetime.
- Choose static allocation when you have fixed-size arrays and want automatic memory management. Choose dynamic allocation when you need runtime flexibility and control over the array's lifetime.