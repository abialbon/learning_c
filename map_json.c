#include <stdio.h>

int main(void)
{
    float latitude;
    float longitude;
    char info[80];
    int started = 0;
    printf("[\n");
    while(scanf("%f,%f,%79[^\n]", &latitude, &longitude, info) == 3)
    {
        if (latitude < -90 || latitude > 90)
        {
            fprintf(stderr, "Invalid latitude: %f\n", latitude);
            return 2;
        }
        else if (longitude < -180 || longitude > 180)
        {
            fprintf(stderr, "Invalid longitude: %f\n", longitude);
            return 2;
        }
        else if (started)
        {
            printf(",\n");
        }
        else
        {
            started = 1;
        }
        printf("{\"latitude\": %f, \"longitude\": %f, \"info\": \"%s\"}", latitude, longitude, info);
    }
    printf("\n]\n");
}