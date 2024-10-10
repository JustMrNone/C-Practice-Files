
# realloc

Understanding `realloc` in C

----------------------------

The `realloc` function is used to resize a previously allocated block of memory. The correct syntax for `realloc` is:

```c
void *realloc(void *ptr, size_t new_size);
```

## Parameters:

- **`ptr`**: A pointer to the memory block that you want to resize (previously allocated with `malloc`, `calloc`, or `realloc`).
- **`new_size`**: The new size (in bytes) for the memory block.

### How `realloc` works

1. **Expands or shrinks** the memory block pointed to by `ptr` to the new size `new_size`.
2. **Allocates new memory** if necessary and copies the content of the old memory block to the new one (e.g., if the current block can't be expanded in place).
3. **Frees the old block** automatically if it allocates a new one.

If the block is successfully resized in place, the pointer remains the same. Otherwise, a new memory block is allocated, and the pointer to the old block becomes invalid.

### Example of Using `realloc`

Suppose you initially allocated memory for 3 integers and later want to resize it to hold 4 integers. The correct use of `realloc` would look like this:

```c
a = realloc(a, 4 * sizeof(int));
```

In this case:

- **`a`**: The pointer to the current memory block that stores 3 integers.
- **`4 * sizeof(int)`**: The new size for the memory block (enough to hold 4 integers).

You should always check if `realloc` is successful, as it may return `NULL` if the allocation fails. If `realloc` fails, it does not free the original block, so you need to handle that scenario carefully.

### Complete Code Using `realloc` Correctly:

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Allocate memory for 3 integers
    int *a = malloc(3 * sizeof(int));
    if (a == NULL)
        return 1;

    a[0] = 1;
    a[1] = 2;
    a[2] = 3;

    // Resize the memory block to hold 4 integers
    int *temp = realloc(a, 4 * sizeof(int));
    if (temp == NULL)
    {
        // Handle realloc failure
        free(a); // Free the old memory
        return 1;
    }

    // Update the pointer to the resized memory
    a = temp;

    // Add the new value
    a[3] = 4;

    // Print the array with the new size
    for (int i = 0; i < 4; i++)
        printf("%i ", a[i]);

    // Free the allocated memory
    free(a);
    return 0;
}
```

### Key Points

- **`realloc`** allows you to dynamically resize memory, adjusting the size as needed.
- Always **check if `realloc` returns `NULL`** to handle memory allocation failures.
- After calling `realloc`, the original pointer may no longer be valid, so **update it** with the return value from `realloc`.

### Output of the Code

```text
`1 2 3 4`
```
