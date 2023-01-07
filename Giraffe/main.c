#include <stdio.h>

int max (int num1, int num2, int num3) {
    int result;
    // The AND operator is: &&
    // The OR operator is: ||
    if(num1 >= num2 && num1 >= num3) {
        result = num1;
    }
    else if(num2 > num3 && num2 > num3) {
        result = num2;
    }
    else {
        result = num3;
    }
    return result;
}

int main() {
    int num1;
    int num2;
    int num3;
    printf("Enter the first integer: \n");
    scanf("%d", &num1);
    while((getchar()) != '\n');
    printf("Enter the second integer: \n");
    scanf("%d", &num2);
    printf("Enter the second integer: \n");
    scanf("%d", &num3);
    printf("The larger integer is: %d", max(num1, num2, num3));
    

    return 0;
}

