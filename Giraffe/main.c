#include <stdio.h>
#include <math.h>

int main() {

    char color[20];
    char pluralNoun[20];
    char celebrity[20];
    char celebrityFirstName[20];
    char celebrityLastName[20];

    printf("Enter a color: ");
    scanf("%s", color);

    printf("Enter a plural noun: ");
    scanf("%s", pluralNoun);

    while((getchar())!='\n');

    printf("Enter a celebrity: ");
    // To get the first name and the last name of the celebrity using two different strings
    // scanf("%s%s", celebrityFirstName, celebrityLastName);
    // scanf() stops taking input after that first space in the string
    // To get the first and last name of the celebrity using the fgets() function
    fgets(celebrity, 20,stdin);

    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);

    printf("I love %s\n", celebrity);

    return 0;
}