#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
    if (argc != 2 || ((atoi(argv[1]) <= 0) || (atoi(argv[1]) > 26)))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    char text[100];
    printf("plain text: \n");
    fgets(text, 100, stdin);

    for (int i = 0; text[i] != '\0'; i++)
    {
        int key = atoi(argv[1]);
        int c = (int) text[i];
        if (!((c >= 65 && c <= 90) || (c >= 97 && c <= 122)))
        {
            printf("%c", text[i]);
        } 
        else if ((c <= 90 && c + key > 90) || c + key > 122)
        {
            printf("%c", c + key - 26);
        }
        else 
        {
            printf("%c", c+key);
        }
        
    }

    printf("\n");
    return 0;
}