/*
Ask the user's for a card
Calculate the value of the card
Display it to the user
*/

# include <stdio.h>

int main() {
    char card[3];
    int card_value;

    puts("Enter a card:");
    scanf("%3s", card);

    if (card[0] == 'K') {
        card_value = 10;
    } else if (card[0] == 'Q') {
        card_value = 10;
    } else if (card[0] == 'J') {
        card_value = 10;
    } else if (card[0] == 'A') {
        card_value = 11;
    } else {
        card_value = atoi(card);
    }
    printf("The value of the card is: %i.\n", card_value);
    return 0;
}