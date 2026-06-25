#include"headers.h"

/* ---------- CANCEL TICKET ---------- */

void cancel_ticket()
{
    FILE *fp;
    FILE *temp;

    int cancel_train;
    int cancel_seat;

    char username[50];
    int train_no;
    char date[20];
    int seat_no;
    char name[50];
    int age;
    char gender[10];
    char cancel_date[20];

    int found=0;

    while(1)
    {
        printf("\nEnter Train Number : ");
        scanf("%d",&cancel_train);

        if(train_exists(cancel_train))
        {
            break;
        }

        printf("Invalid Train Number\n");
    }

   printf("Enter Date (YYYY-MM-DD) : ");
   scanf("%19s",cancel_date);

   printf("Enter Seat Number : ");
   scanf("%d",&cancel_seat);

    fp=fopen("booking.txt","r");

    if(fp==NULL)
    {
        printf("No Booking Found\n");
        return;
    }

    temp=fopen("temp.txt","w");

    while(fscanf(fp,
    "%s %d %s %d %s %d %s",
    username,
    &train_no,
    date,
    &seat_no,
    name,
    &age,
    gender)==7)
    {
      if(strcmp(username,current_user)==0 &&
         train_no==cancel_train &&
         strcmp(date,cancel_date)==0 &&
         seat_no==cancel_seat)
        {
            found=1;
            continue;
        }

        fprintf(temp,
        "%s %d %s %d %s %d %s\n",
        username,
        train_no,
        date,
        seat_no,
        name,
        age,
        gender);
    }

    fclose(fp);
    fclose(temp);

    remove("booking.txt");
    rename("temp.txt","booking.txt");

    if(found)
    {
        printf("Ticket Cancelled Successfully\n");
    }
    else
    {
        printf("Seat Not Found\n");
    }
}
