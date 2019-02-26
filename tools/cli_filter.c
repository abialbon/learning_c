#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc < 5)
    {
        printf("5 commandline arguments required.\n");
        return 1;
    }
    float latitude;
    float longitude;
    char info[80];
    FILE *in_file = fopen("../data/map.csv", "r");
    FILE *file1 = fopen(argv[2], "w");
    FILE *file2 = fopen(argv[4], "w");
    FILE *file3 = fopen(argv[5], "w");

    while(fscanf(in_file, "%f,%f,%79[^\n]", &latitude, &longitude, info) == 3)
    {
        if (strstr(info, argv[1]))
        {
            fprintf(file1, "%f,%f,%s\n", latitude, longitude, info);
        }
        else if (strstr(info, argv[3]))
        {
            fprintf(file2, "%f,%f,%s\n", latitude, longitude, info);
        }
        else 
        {
            fprintf(file3, "%f,%f,%s\n", latitude, longitude, info);
        }
    }
    fclose(file1);
    fclose(file2);
    fclose(file3);
    fclose(in_file);
}