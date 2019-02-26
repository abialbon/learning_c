#include <stdio.h>

int main(void) 
{
    int started = 0;
    float latitude;
    float longitude;
    char info[80];
    printf("[\n");
    while(scanf("%f,%f,%79[^\n]", &latitude, &longitude, info) == 3)
    {
        if (started)
        {
            printf(",\n");
        }
        else
        {
            started = 1;
        }
        
        printf("{\"latitude\":%f, \"longitude\":%f, \"info\": %s}", latitude, longitude, info);
    }
    printf("\n]\n");
}