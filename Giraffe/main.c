#include <stdio.h>

int main() {
    int index1 = 1;
    int index2 = 1;
    printf("The results of while loop are: \n");
    // while loop
    while(index1 <=5 ) {
        printf("The index value is: %d\n", index1);
        index1++;
    }

    printf("The results of do while loop are: \n");
    // do while loop
    do {
        printf("The index value is: %d\n", index2);
        index2++;
    } while (index2 <=5 );



    return 0;
}

