#include <stdio.h>
#include <limits.h>

int main(void)
{
    printf("The size of a short is: %lu bytes\n", sizeof(short));
    printf("The size of an int is: %lu bytes\n", sizeof(int));
    printf("The size of a long is: %lu bytes\n", sizeof(long));
    printf("The size of a float is: %lu bytes\n", sizeof(float));
    printf("The size of a double is: %lu bytes\n", sizeof(double));
    printf("The size of a char is: %lu bytes\n", sizeof(char));
    printf("The size of this string is: %lu bytes\n", sizeof("Abialbon Paul"));
    printf("The max size of an int is %d and minimum is %d\n", INT_MAX, INT_MIN);
    return 0;
}