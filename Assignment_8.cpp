#include <stdio.h>


int main() {
    char ch;


    printf("Enter a letter from the English alphabet: ");
    scanf("%c", &ch);


    printf("You entered: %c (ASCII: %d)\n", ch, ch);
    printf("Previous letter: %c (ASCII: %d)\n", ch - 1, ch - 1);
    printf("Next letter: %c (ASCII: %d)\n", ch + 1, ch + 1);


    return 0;
}
