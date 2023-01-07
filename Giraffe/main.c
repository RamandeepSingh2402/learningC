#include <stdio.h>


int main() {
    char grade = 'A';

    // Switch statements in C
    switch (grade) {
        case 'A':
            printf("Your grade is A.");
            break;
        case 'B':
            printf("You grade is B.");
            break;
        case 'C':
            printf("Your grade is C.");
            break;
        case 'D':
            printf("Your grade is D.");
            break;
        case 'E':
            printf("Your grade is E.");
            break;
        case 'F':
            printf("Your grade is F.");
            break;

        default:
            printf("Invalid grade.");
            break;
    }

    return 0;
}

