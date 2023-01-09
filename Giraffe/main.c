#include <stdio.h>

int main() {

   // Pointers in C
   int age = 30;
   int * pAge =&age;
   double gpa = 3.61;
   double * pGpa = &gpa;
   char grade = 'A';
   char * pGrade = &grade;

   printf("Age's memory address: %p\n", pAge);

    return 0;
}

