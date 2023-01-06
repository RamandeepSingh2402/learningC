#include <stdio.h>
#include <math.h>

// Return statements in C

double cube(double num);


int main() {
    double input;
    double result;
    printf("Enter the number which you want to be cubed: ");
    scanf("%lf", &input);
    result = cube(input);
    printf("The cubed value is: %f", result);
    return 0;
}

double cube(double num) {
    return num * num * num;;
}