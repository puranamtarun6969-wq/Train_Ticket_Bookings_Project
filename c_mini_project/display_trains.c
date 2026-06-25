#include"headers.h"

/* ---------- DISPLAY TRAINS ---------- */

void display_trains()
{
    FILE *fp;

    int tno;
    char tname[100];

    fp=fopen("trains.txt","r");

    if(fp==NULL)
    {
        printf("No Trains Available\n");
        return;
    }

    printf("\n------ AVAILABLE TRAINS ------\n");

    while(fscanf(fp,"%d %[^\n]",&tno,tname)==2)
    {
        printf("%d %s\n",tno,tname);
    }

    fclose(fp);
}

