#include <stdio.h>
#include <string.h>

int main(void)
{
    float latitude;
    float longitude;
    char info[80];
    FILE *in_file = fopen("../data/map.csv", "r");
    FILE *file1 = fopen("../data/spooky.csv", "w");
    FILE *file2 = fopen("../data/ufo.csv", "w");
    FILE *file3 = fopen("../data/elvis.csv", "w");

    while(fscanf(in_file, "%f,%f,%79[^\n]", &latitude, &longitude, info) == 3)
    {
        if (strstr(info, "UFO"))
        {
            fprintf(file2, "%f,%f,%s\n", latitude, longitude, info);
        }
        else if (strstr(info, "Elvis"))
        {
            fprintf(file3, "%f,%f,%s\n", latitude, longitude, info);
        }
        else 
        {
            fprintf(file1, "%f,%f,%s\n", latitude, longitude, info);
        }
    }
    fclose(file1);
    fclose(file2);
    fclose(file3);
    fclose(in_file);
}