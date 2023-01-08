#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    char major[50];
    int age;
    double gpa;

};

int main() {
    struct Student student1;
    student1.age = 20;
    student1.gpa = 3.60;
    // Using string copy
    strcpy(student1.name, "Ramandeep");
    strcpy(student1.major, "Computer Science");

    struct Student student2;
    student2.age = 20;
    student2.gpa = 2.5;
    // Using string copy
    strcpy(student2.name, "Jim");
    strcpy(student2.major, "Arts");

    printf("The name of the first student is: %s\n",student1.name);
    printf("The name of the second student is: %s\n",student2.name);
    return 0;
}

