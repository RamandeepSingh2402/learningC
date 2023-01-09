#include <stdio.h>

int main() {

   // Dereferencing pointers in C
   int age = 30;
   int *pAge = &age;
    printf("The memory address of age is: %p\n", &age);
    printf("The value stored in age is: %d", *pAge);

    return 0;
}

