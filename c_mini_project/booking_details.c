#include"headers.h"

/* ---------- BOOKING DETAILS ---------- */

void booking_details()
{
    FILE *fp;

    int search_train;

    char username[50];
    int train_no;
    char date[20];
    int seat_no;
    char name[50];
    int age;
    char gender[10];

    int found=0;

    while(1)
    {
        display_trains();
        
         
        printf("\nEnter Train Number : ");
        scanf("%d",&search_train);

        if(train_exists(search_train))
        {
            break;
        }

        printf("Invalid Train Number\n");
    }

    fp=fopen("booking.txt","r");

    if(fp==NULL)
    {
        printf("No Booking Found\n");
        return;
    }

    printf("\n------ BOOKING DETAILS ------\n");

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
           train_no==search_train)
        {
            found=1;

            printf("\nSeat No : %d",seat_no);
            printf("\nName    : %s",name);
            printf("\nAge     : %d",age);
            printf("\nGender  : %s",gender);
            printf("\nDate    : %s\n",date);
        }
    }

    fclose(fp);\

    if(found==0)
    {
        printf("No Booking Found\n");
    }
}

