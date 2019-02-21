/*
* This code uses fget to get a string from the user
*/
# include <stdio.h>

int main(void)
{
    char name[32];
    puts("Hey, what is your name?");
    fgets(name, sizeof(name), stdin);
    printf("Hello, %s", name);
    return 0;
}