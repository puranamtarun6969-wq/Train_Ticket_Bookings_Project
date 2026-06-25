#include"headers.h"

/* ---------- TRAIN EXISTS ---------- */

int train_exists(int train_no)
{
    FILE *fp;

    int tno;
    char tname[100];

    fp=fopen("trains.txt","r");

    if(fp==NULL)
    {
        return 0;
    }

    while(fscanf(fp,"%d %[^\n]",&tno,tname)==2)
    {
        if(tno==train_no)
        {
            fclose(fp);
            return 1;
        }
    }

    fclose(fp);

    return 0;
}

