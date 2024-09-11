# C++ Passing Behavior for Different Types

In C++, the default behavior for passing arguments to functions is **pass-by-value**. This means that a **copy** of the argument is made and passed to the function, and any modifications to the parameter inside the function do not affect the original argument.

## Default Passing Behavior for Common Types

### 1. **Primitives (`int`, `char`, `float`, `double`, etc.)**

- **Default Behavior**: Passed by **value**.
- **Explanation**: When you pass primitive types like `int`, `char`, `float`, `double`, etc., to a function, a copy of the value is made. The function receives a copy of the original data, and modifications inside the function do not affect the original value.

```cpp
void modifyPrimitive(int num) {
    num = 10; // Modifies only the local copy
}

int main() {
    int x = 5;
    modifyPrimitive(x);
    // x remains 5
}
```

### 2. **Arrays**

- **Default Behavior**: Passed by **reference**.
- **Explanation**: When you pass an array to a function, a pointer to the first element of the array is passed. This means the function receives the address of the original array, and changes made inside the function will affect the original array. Note that the array itself is not copied.

```cpp
void modifyArray(int arr[], int size) {
    arr[0] = 10; // Modifies the original array
}

int main() {
    int arr[3] = {1, 2, 3};
    modifyArray(arr, 3);
    // arr[0] is now 10
}
```

To prevent modification, you can pass the array by `const` reference:

```cpp
void modifyArray(const int arr[], int size) {
    // arr is read-only
}
```

### 3. **`std::vector` and Other STL Containers**

- **Default Behavior**: Passed by **value**.
- **Explanation**: When you pass a `std::vector` or other Standard Template Library (STL) containers, a copy of the entire container is made. Any modifications inside the function do not affect the original container.

```cpp
void modifyVector(std::vector<int> vec) {
    vec.push_back(4); // Modifies only the local copy
}

int main() {
    std::vector<int> numbers = {1, 2, 3};
    modifyVector(numbers);
    // numbers remains unchanged
}
```

To avoid the cost of copying, and if you need to modify the original vector, you should pass it by reference:

```cpp
void modifyVector(std::vector<int>& vec) {
    vec.push_back(4); // Modifies the original vector
}
```

If you don't want to modify the original vector but still avoid copying, use a `const` reference:

```cpp
void printVector(const std::vector<int>& vec) {
    for (int num : vec) {
        std::cout << num << " ";
    }
}
```

### 4. **User-Defined Classes and Structs**

- **Default Behavior**: Passed by **value**.
- **Explanation**: When you pass an object of a user-defined class or struct to a function, a copy of the entire object is made. Any modifications inside the function do not affect the original object.

```cpp
struct Point {
    int x, y;
};

void modifyPoint(Point p) {
    p.x = 10; // Modifies only the local copy
}

int main() {
    Point pt = {5, 5};
    modifyPoint(pt);
    // pt.x remains 5
}
```

To avoid copying, pass the object by reference if you want to modify it:

```cpp
void modifyPoint(Point& p) {
    p.x = 10; // Modifies the original object
}
```

Or, pass by `const` reference if no modification is intended:

```cpp
void printPoint(const Point& p) {
    std::cout << "(" << p.x << ", " << p.y << ")";
}
```

### 5. **Pointers**

- **Default Behavior**: Passed by **value**.
- **Explanation**: When you pass a pointer to a function, the pointer itself (i.e., the memory address it holds) is copied. However, both the original and the copied pointers point to the same memory location. This means that while you cannot change the pointer's value (the address it holds) from within the function, you can modify the object to which it points.

```cpp
void modifyPointer(int* p) {
    *p = 20; // Modifies the original object through the pointer
}

int main() {
    int x = 10;
    modifyPointer(&x);
    // x is now 20
}
```

### 6. **References**

- **Default Behavior**: Passed by **reference**.
- **Explanation**: When you pass a reference to a function, it behaves like an alias for the original variable. This means that changes made to the reference inside the function affect the original variable.

```cpp
void modifyReference(int& num) {
    num = 10; // Modifies the original value
}

int main() {
    int x = 5;
    modifyReference(x);
    // x is now 10
}
```

## Summary

- **Primitives (`int`, `char`, `float`, `double`, etc.)**: Passed by **value** by default.
- **Arrays**: Passed by **reference** (as a pointer to the first element).
- **STL Containers (`std::vector`, `std::list`, etc.)**: Passed by **value** by default.
- **User-Defined Classes and Structs**: Passed by **value** by default.
- **Pointers**: Passed by **value** by default, but can modify the object pointed to.
- **References**: Passed by **reference**.

> In general, if you want to modify the original data and avoid copying, you should use **pass-by-reference** (with or without `const` depending on whether you intend to modify the data).