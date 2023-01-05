#include <stdio.h>
#include <math.h>

int main() {

    const int FAV_NUM = 1;
    int num = 5;
    printf("The value of num is: %d\n", num);
    num = 10;
    printf("The updated value of num is: %d\n", num);
    printf("The constant value here is: %d\n", FAV_NUM);
    return 0;
}