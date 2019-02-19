/*
* A simple card counter
* implementing while loop, switch statements
* and break, continue
*/

# include <stdio.h>

int main(void) {
    char card_name[3];
    int count = 0;
    while (card_name[0] != 'X') {
        puts("Enter the card:");
        scanf("%2s", card_name);
        int val;
        switch (card_name[0])
        {
            case 'K':
            case 'Q':
            case 'J':
                val = 10;
                break;
            case 'A':
                val = 11;
                break;
            case 'X':
                continue;
            default:
                val = atoi(card_name);
                if (val > 10) {
                    puts("You entered a wrong card value.");
                    continue;
                }
                break;
        }
        if (val >= 10) {
            count = count - 1;
        } else if (val >= 3 && val <= 6) {
            count = count + 1;
        } else {
            continue;
        }
    }
    printf("The total count is: %i\n", count);
    return 0;
}
