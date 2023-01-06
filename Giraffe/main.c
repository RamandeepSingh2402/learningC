#include <stdio.h>
#include <math.h>

// Functions/Methods in C

void sayHi(char name[], int age);

int main() {
    sayHi("Mike", 20);
    sayHi("Tom", 22);
    sayHi("Oscar", 33);
    return 0;
}

void sayHi(char name[], int age) {
    printf("Hi %s, you are %d years old.\n", name, age);
}