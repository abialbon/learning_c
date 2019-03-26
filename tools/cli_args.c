#include <stdio.h>

// The argc is the number of arguments that is passed into the main function
// the argv is a string array of all the arguments that are passed
int main(int argc, char *argv[])
{
    for (int i = 1; i < argc; i++)
    {
        printf("Argument %i: %s\n", i, argv[i]);
    }
}