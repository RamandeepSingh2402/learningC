#include <stdio.h>

int main() {

    int secretNum = 5;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;
    int guess = 0;

    while((guess != secretNum) && (outOfGuesses == 0)) {
        if(guessCount < guessLimit) {
            printf("Enter an integer: ");
            scanf("%d", &guess);
            guessCount++;
        }
        else {
            outOfGuesses = 1;
        }
    }
    if(outOfGuesses == 1) {
        printf("You ran out of guesses.");
    }
    else {
        printf("You guessed the right number!");
    }

    return 0;
}

