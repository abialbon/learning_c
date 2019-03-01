#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int check_string(char s[]);
int *get_shift_value(int l, char *s);
char apply_vigenere_on_char(char t, int pos, int *key_shifts, int key_l);

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }
    else if (!check_string(argv[1]))
    {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }
    else 
    {
        int k_length = strlen(argv[1]);
        char *keyword = malloc(k_length);
        strcpy(keyword, argv[1]);
        int* shift_values = get_shift_value(k_length, keyword);
        
        char text[200];
        printf("plaintext: ");
        scanf("%199[^\n]", text);
        printf("ciphertext: ");
        int pos = 0;
        int j = 0;
        while (text[j] != '\0')
        {
            int c = (int) text[j];
            if (!((c >= 65 && c <= 90) || (c >= 97 && c <= 122))) 
            {
                printf("%c", text[j]);
            }
            else
            {
                printf("%c", apply_vigenere_on_char(text[j], pos, shift_values, k_length));
                pos+=1;
            }
            j++;
        }
        printf("\n");
    }
}

int check_string(char s[])
{
    for (char *i = s; *i != '\0'; i++)
    {
        if (!isalpha(*i))
        {
            return 0;
        }
    }
    return 1;
}

int *get_shift_value(int l, char *s)
{
    int *shift_values = malloc(l);
    for (int i = 0; i < l; i++)
    {
        if ((int) s[i] >= 65 && (int) s[i] <= 90)
        {
            shift_values[i] = (int) s[i] - 65;
        }
        else
        {
            shift_values[i] = (int) s[i] - 97;
        }
    }
    return shift_values;
}

char apply_vigenere_on_char(char t, int pos, int *key_shifts, int key_l)
{
    int c = (int) t;
    int key = key_shifts[pos % key_l];
    if ((c <= 90 && c + key > 90) || c + key > 122)
    {
        return (char) c + key - 26;
    }
    else
    {
        return (char) c + key;
    }
}