#include <stdio.h>

int main() {


    // r - read
    // w - write: create a new file or write over an existing file
    // a - append: Means appending on a file.
    FILE * fpointer = fopen("employees.txt", "w");

    /*
        If we do not give an absolute path or do not specify the directory,
        the file would be created in the root directory of where the C file is.
     */

    fclose(fpointer);
    return 0;
}

