# Review 1

In Lecture 4 of CS50x, **Memory**, the focus shifts from basic programming constructs to the more technical aspects of how computers manage memory. This is a crucial concept because understanding memory in C gives you more control over how your program uses resources, how it handles data, and why certain bugs like segmentation faults occur.

Here's an in-depth review of what Lecture 4 covers:

* * * * *

## **1\. Memory Fundamentals**

Memory in a computer is a linear, contiguous block of bytes that stores data for programs to use. In C, understanding how memory works is essential because the language allows low-level memory manipulation.

- **Bytes and Addresses**:

- A **byte** is the basic unit of memory, and each byte in memory has a unique **address**. Addresses are like locations in memory.
- Different types of data (like integers or characters) occupy different amounts of memory. For example, an `int` usually takes up 4 bytes, while a `char` takes up 1 byte.
- **Memory Layout**: Memory is divided into several segments:

- **Text Segment**: This contains the compiled program's code.
- **Data Segment**: Contains global and static variables.
- **Heap**: Used for dynamic memory allocation.
- **Stack**: Used for managing function calls and local variables.

* * * * *

### **2\. Pointers**

A **pointer** is a variable that stores the memory address of another variable. Pointers are essential for working with dynamic memory, passing large data structures efficiently, and understanding how arrays work in C.

- **Pointer Declaration**:

    ```c
    int *p;  // declares a pointer to an int
    ```

- **Pointer Initialization**:

    ```c

    int x = 42;
    int *p = &x;  // p now holds the address of x

    ```

- **Dereferencing**: Access the value stored at the memory address pointed to by the pointer:

    ```c
    printf("%d", *p);  // outputs the value of x (42)
    ```

- **NULL Pointers**: A pointer that doesn't point to any valid memory location. It's good practice to initialize pointers to `NULL` if they aren't assigned a valid address yet.

* * * * *

### **3\. Pointer Arithmetic**

You can perform arithmetic on pointers to traverse memory addresses. This is especially useful when working with arrays.

- **Pointer Arithmetic**:
- `p + 1` moves the pointer to the next memory address for the type `p` is pointing to.
- For an `int *p`, `p + 1` moves by 4 bytes (if an `int` is 4 bytes) to the next integer.
- **Example**: Iterating through an array using pointer arithmetic:

    ```c
    int arr[3] = {1, 2, 3};
    int *p = arr;
    for (int i = 0; i < 3; i++) {
        printf("%d\n", *(p + i));  // prints each element of the array
    }
    ```

* * * * *

### **4\. Arrays and Pointers**

In C, arrays and pointers are closely related. The name of an array is essentially a pointer to its first element.

- **Array vs. Pointer**: The name of the array (`arr`) is equivalent to `&arr[0]`, the address of the first element of the array.

- **Pointer to Array**: A pointer can be used to iterate through an array:

    ```c
    int arr[] = {1, 2, 3};
    int *p = arr;  // p now points to the first element of the array`

    ```

- **Modifying Array Elements via Pointers**:

    ```c
    *p = 42;  // changes arr[0] to 42
    ```

* * * * *

### **5\. Dynamic Memory Allocation**

C provides functions for allocating memory at runtime, which allows for greater flexibility than static memory allocation (e.g., arrays).

#### **`malloc()` and `free()`**

- **`malloc()`** (Memory Allocation):

- Dynamically allocates memory on the **heap**.
- Returns a pointer to the beginning of the allocated block.
- The memory allocated by `malloc()` is uninitialized, so it may contain garbage values.

    ```c

    `int *p = malloc(10 * sizeof(int));  // allocates space for 10 integers`
    ```

- **`free()`**:

- Frees the dynamically allocated memory to avoid memory leaks.

    ```c

    `free(p);  // releases the allocated memory`

    ```

- **Example**:

    ```c

    int *arr = malloc(5 * sizeof(int));  // dynamically allocates space for 5 ints
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }
    free(arr);  // releases the allocated memory
    ```

#### **Common Pitfalls**

- **Memory Leaks**: Forgetting to free dynamically allocated memory leads to memory leaks, which can cause your program to consume too much memory over time.
- **Dangling Pointers**: If you free memory but still use the pointer to access it, this can lead to undefined behavior.

* * * * *

### **6\. `calloc()` and `realloc()`**

- **`calloc()`**:

- Like `malloc()`, but it also initializes the allocated memory to zero.

    ```c
    int *p = calloc(10, sizeof(int));  // allocates space for 10 ints, all initialized to 0
    ```

- **`realloc()`**:

- Resizes a previously allocated block of memory.

    ```c
    p = realloc(p, 20 * sizeof(int));  // resizes the memory block to hold 20 ints
    ```

* * * * *

### **7\. Strings as Arrays of Characters**

In C, a string is simply an array of characters terminated by a null character (`'\0'`).

- **String Declaration**:

    c

    Copy code

    `char str[] = "hello";  // equivalent to char str[] = {'h', 'e', 'l', 'l', 'o', '\0'};`

- **String Manipulation**: Strings can be manipulated using pointers and arrays. Functions like `strlen()`, `strcpy()`, `strcat()`, etc., work with strings and pointers.

- **Pointer to String**: Since strings are arrays, pointers can be used to iterate through or modify them:

    ```c

    char *str = "hello";
    printf("%c", *(str + 1));  // outputs 'e'`
    ```

* * * * *

### **8\. Common Memory-related Bugs**

#### **Segmentation Fault (Segfault)**

Occurs when a program tries to access memory that it isn't allowed to, like dereferencing an uninitialized pointer or accessing memory outside the bounds of an array.

#### **Buffer Overflow**

Happens when writing data outside the bounds of allocated memory. For example, writing more characters to a string than its allocated size.

#### **Use-after-free**

Accessing memory that has already been freed can lead to unpredictable behavior or crashes.

* * * * *

### **9\. Summary of Key Functions**

| Function | Description |
| --- | --- |
| `malloc(size)` | Allocates `size` bytes of uninitialized memory from the heap. |
| `calloc(n, size)` | Allocates memory for an array of `n` elements, initializing to zero. |
| `realloc(ptr, size)` | Resizes the memory block pointed to by `ptr`. |
| `free(ptr)` | Frees the memory allocated by `malloc()` or `calloc()`. |

* * * * *

### **Conclusion**

Lecture 4 dives deep into how memory is structured and managed in C, from the use of pointers to dynamic memory allocation. Understanding memory management is essential for writing efficient, bug-free programs in C. This lecture sets the foundation for handling data structures like linked lists, trees, and other dynamically allocated constructs later in the course.