# Installing the CS50 Library on Windows Using MinGW

Follow these steps to install and use the CS50 library on Windows with MinGW.

## Steps to Install CS50 Library on Windows with MinGW

### 1. Install MinGW (if not already installed)

1. Download the **MinGW** installer from [MinGW SourceForge](https://sourceforge.net/projects/mingw/).
2. Install MinGW, ensuring you select: <br>`mingw32-gcc-g++` (C and C++ compiler).
3. Add **MinGW** to your system's environment `PATH` variable (you can do this by editing the system environment variables).

### 2. Download CS50 Library

1. Download the CS50 library from its [GitHub repository](https://github.com/cs50/libcs50).
2. You can either clone the repository using Git or download the ZIP file and extract it.

### 3. Compile and Install the CS50 Library

Since you're on Windows, you'll need to manually compile the CS50 library and place the files in the appropriate locations. Here's how:

1. Open the **MinGW** terminal (`mingw64.exe`) or the **Command Prompt**.
2. Navigate to the folder where you downloaded/extracted the CS50 library:

```bash
   cd path_to_cs50_folder
```

1. Instead of using `sudo make install`, compile the library manually by following these steps:

    1. First, compile the CS50 library using the following command:

        bash

        Copy code

        `gcc -c -o cs50.o cs50.c`

    2. Then, create a static library:

        bash

        Copy code

        `ar rcs libcs50.a cs50.o`

2. Place the compiled library (`libcs50.a`) and the header file (`cs50.h`) in the appropriate locations:

    - Move `cs50.h` to the **MinGW** include folder (usually located at `C:\MinGW\include`).
    - Move `libcs50.a` to the **MinGW** lib folder (usually located at `C:\MinGW\lib`).

### 4\. Compile Programs with the CS50 Library:

When compiling your C programs with MinGW, you can now link the CS50 library using the `-lcs50` flag:

bash

Copy code

`gcc -o myprogram myprogram.c -lcs50`

Example C Program Using the CS50 Library:

-----------------------------------------

In your C program, include the `cs50.h` header as follows:

```c

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("What's your name? ");
    printf("Hello, %s!\n", name);
}
```

### To compile and run this program

```bash

`gcc -o hello hello.c -lcs50
./hello`

```