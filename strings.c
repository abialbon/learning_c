#include <stdio.h>
#include <string.h>

void search_tracks(char text[]);

char tracks[][80] = {
"I left my heart in Harvard Med School", 
"Newark, Newark - a wonderful town", 
"Dancing with a Dork",
"From here to maternity",
"The girl from Iwo Jima",
};

int main(void)
{
    printf("Search for: \n");
    char t[80];
    scanf("%s", t);
    search_tracks(t);
    return 0;
}

void search_tracks(char text[])
{
    for (int i = 0; i < 5; i++)
    {
        if (strstr(tracks[i], text))
        {
            printf("Track %i: %s\n", i+1, tracks[i]);
        }
    }
}