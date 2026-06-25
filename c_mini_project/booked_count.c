#include"headers.h"

/* ---------- BOOKED COUNT ---------- */

int booked_count(int train_no,char date[])
{
    FILE *fp;

    char username[50];
    int tno;
    char file_date[20];
    int seat_no;
    char name[50];
    int age;
    char gender[10];

    int count=0;

    fp=fopen("booking.txt","r");

    if(fp==NULL)
    {
        return 0;
    }

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
            count++;
        }
    }

    fclose(fp);

    return count;
}
