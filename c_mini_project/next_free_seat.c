#include"headers.h"

/* ---------- NEXT FREE SEAT ---------- */

int next_free_seat(int train_no,char date[])
{
    FILE *fp;

    int seat_used[6]={0};

    char username[50];
    int tno;
    char file_date[20];
    int seat_no;
    char name[50];
    int age;
    char gender[10];

    int i;

    fp=fopen("booking.txt","r");

    if(fp!=NULL)
    {
        while(fscanf(fp,
        "%s %d %s %d %s %d %s",
        username,
        &tno,
        file_date,
        &seat_no,
        name,
        &age,
        gender)==7)
        {
            if(tno==train_no &&
               strcmp(file_date,date)==0)
            {
                if(seat_no>=1 &&
                   seat_no<=5)
                {
                    seat_used[seat_no]=1;
                }
            }
        }

        fclose(fp);
    }

    for(i=1;i<=5;i++)
    {
        if(seat_used[i]==0)
        {
            return i;
        }
    }

    return -1;
}
