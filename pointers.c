/*
* Pointers - extremely important to understand in C programming
* Pointers help to
* Avoid duplicate copy of data
* Multiple functions work on same data
*/

# include <stdio.h>

void go_south_east(int* lat, int* lon) {
    *lat = *lat - 1;
    *lon = *lon + 1;
}

int main(void) {
    int latitude = 30;
    int longitude = -60;
    go_south_east(&latitude, &longitude);
    printf("You are currently at: [%d, %d]\n", latitude, longitude);
    return 0;
}
