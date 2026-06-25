#include"headers.h"

/* ---------- DISPLAY TRAINS WITH AVAILABILITY ---------- */

void display_trains_with_availability(char date[])
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
        printf("%d %s Seats Available : %d\n",
               tno,
               tname,
               available_seats(tno,date));
    }

    fclose(fp);
}
