/*
* Pointer arithmetic can be used to fetch memory locations of other elements in an array
* Pointer types are needed so the compiler knows how long an element takes in memory
* 
*/

# include <stdio.h>

int main(void) {
    char s[] = "Pointer arithmetic is interesting! Really:)";
    // Prints the string 
    puts(s);
    // Moves the pointer 8 bytes away and prints from there
    puts(s+8);
    // Prints the character at index 3
    // s[3] == *(s+3) == *(3+s) == 3[s] !!!
    printf("%c -- %c -- %c\n", s[3], *(s+3), 3[s]);
    return 0;
}