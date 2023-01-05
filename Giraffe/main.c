#include <stdio.h>
#include <math.h>

int main() {

    // Getting user input
    int age;
    double gpa;
    char grade, name[20];
    char fullName[20];
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You are %d years old.\n", age);

    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    printf("Your gpa is %f.\n", gpa);

    while ((getchar()) != '\n');

    printf("Enter your grade: ");
    scanf("%c", &grade);
    printf("Your grade is %c\n", grade);

    printf("Enter your first name: ");
    scanf("%s", name);
    printf("Your name is %s\n", name);

    while((getchar())!='\n');

    // To get a line of text having spaces in between
    printf("Enter you full name: ");
    fgets(fullName, 20, stdin);
    printf("Your full name is: %s", fullName);
    return 0;
}