#include <stdio.h>
#include <math.h>

int main() {
    double firstNum;
    double secondNum;

    printf("Enter the first number:");
    scanf("%lf", &firstNum);

    printf("Enter the second number:");
    scanf("%lf", &secondNum);

    printf("The sum of the two numbers is: %f", firstNum + secondNum);
    return 0;
}