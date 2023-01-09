#include <stdio.h>

int main() {

   // accessing memory addresses
   // All these values will be stored in RAM
   int age = 30;
   double gpa = 3.4;
   char grade = 'A';
   // printing the memory address of the variables
   // we use %p for pointers
   // it is technically not a number, the memory address could be a hexadecimal number
    printf("The memory address of age is: %p\n", &age);
    printf("The memory address of gpa is: %p\n", &gpa);
    printf("The memory address of grade is: %p\n", &grade);

    return 0;
}

