/*
This is not my first code in C but this the first code in C
as I start learning Head First in C.
*/

# include <stdio.h>

int main() {
    int decks;
    puts("Enter the number of decks: ");
    scanf("%i", &decks);

    if (decks < 1) {
        puts("That is not a valid no of decks");
        return 1;
    } else {
        printf("There are %i cards in total.\n", decks * 52);
    }
    return 0;
}