# On pointers

## The Code

```c

#include <stdio.h>
#include <stdlib.h>  // For malloc()

int main(void)
{
    int *x;
    int *y;

    // Allocating memory to store an integer and making 'x' point to it
    x = malloc(sizeof(int));

    // Dereferencing 'x' to set the value at the allocated memory location
    *x = 42;

    // Making 'y' point to the same memory location as 'x'
    y = x;

    // Dereferencing 'y' to change the value stored at that memory location
    *y = 13;

    // Free the allocated memory (not shown in original code but should be done)
    free(x);

    return 0;
}
```

### Step-by-Step Explanation

1. **Pointer Declarations:**

    ```c
    int *x;
    int *y;
    ```

    - `int *x` and `int *y` declare two pointers, `x` and `y`. They are variables that will hold **memory addresses** where integers can be stored. At this point, they don't point to any valid memory yet.
2. **Memory Allocation:**

    ```c
    x = malloc(sizeof(int));
    ```

    - `malloc(sizeof(int))` allocates enough memory to store one integer (`sizeof(int)`).

    - The `malloc` function returns the memory **address** of this allocated block, and this address is stored in `x`. Now, `x` points to a valid memory location where an integer can be stored.

    - **Visualization:**

        ```bash
        x -> [ ??? ]  (allocated memory, but uninitialized)
        ```

3. **Setting a Value via Dereferencing:**

    ```c
    *x = 42;
    ```

    - The `*` (dereference) operator is used to access the **value** stored at the memory address that `x` points to.

    - `*x = 42;` sets the value at the memory location that `x` points to, storing `42` in that memory.

    - **Visualization:**

        ```bash
        x -> [ 42 ]  (value set to 42 at the allocated memory location)
        ```

4. **Pointer Assignment:**

    ```c
    y = x;
    ```

    - This line makes `y` point to the **same memory location** as `x`. Now both `x` and `y` point to the same memory block that holds the integer `42`.

    - **Visualization:**

        ```bash
        x -> [ 42 ]  (both x and y point to the same memory)
        y -> [ 42 ]
        ```

5. **Changing the Value via Dereferencing:**

    ```c
    *y = 13;
    ```

    - Again, the `*` operator is used to dereference `y`. Since `y` points to the same memory location as `x`, `*y` accesses that same memory.

    - `*y = 13;` changes the value at the memory location to `13`. Since both `x` and `y` point to the same place, this change affects both.

    - **Visualization:**

        ```bash
        x -> [ 13 ]  (value changed to 13)
        y -> [ 13 ]
        ```

6. **Freeing the Memory:** While not in the original code, it's important to free dynamically allocated memory to prevent memory leaks:

    ```c
    free(x);
    ```

    - This frees the memory allocated by `malloc`, ensuring that it can be reused by the system. Since `y` also points to the same memory, both `x` and `y` become invalid after this `free` operation.

* * * * *

### Summary

- **`x`** and **`y`** are both pointers to integers.
- **`malloc`** is used to allocate memory to store an integer, and **`x`** is made to point to that memory.
- **Dereferencing** (`*x`) allows you to access and set the value at the memory location `x` points to.
- When **`y`** is assigned to `x`, both pointers point to the **same memory location**.
- Changing the value via `*y` affects the same memory location that `x` points to.
- Finally, the memory is **freed** to prevent memory leaks.
