#include <stdio.h>

int main() {

    // 2-D Arrays in C
    int nums[3][2] = {

                {1, 2},
                {3, 4},
                {5, 6}
    };


    printf("The original value at (0,0) is: %d\n", nums[0][0]);
    printf("The original value at (0,1) is: %d\n", nums[0][1]);
    printf("The original value at (1,0) is: %d\n", nums[1][0]);
    printf("The original value at (1,1) is: %d\n", nums[1][1]);
    printf("The original value at (2,0) is: %d\n", nums[2][0]);
    printf("The original value at (2,1) is: %d\n", nums[2][1]);

    printf("Result using nested loops: \n");
    // Nested for loops
    int i, j;
    for(i = 0; i<3; i++) {
        for(j = 0; j<2; j++) {
            printf("(%d,%d): %d     ", i,j, nums[i][j]);
        }
        printf("\n");
    }


    return 0;
}

