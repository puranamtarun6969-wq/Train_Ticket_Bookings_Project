#include"headers.h"

/* ---------- FILE INITIALIZATION ---------- */

void initialize_files()
{
    FILE *fp;

    fp=fopen("users.txt","a");

    if(fp!=NULL)
    {
        fclose(fp);
    }

    fp=fopen("booking.txt","a");

    if(fp!=NULL)
    {
        fclose(fp);
    }

    fp=fopen("trains.txt","r");

    if(fp==NULL)
    {
        fp=fopen("trains.txt","w");

        fprintf(fp,"100 Hyderabad-Chennai\n");
        fprintf(fp,"101 Vizag-Delhi\n");

        fclose(fp);
    }
    else
    {
        fclose(fp);
    }
}

