#include <stdio.h>

int main() {

    int luckyNumbers[] = { 2,4,6,8,10 };

    // For loops in C
    printf("The values in the provided array are as follows: \n");
    for(int i = 0; i<5; i++){
        printf("%d\n", luckyNumbers[i]);
    }

    return 0;
}

