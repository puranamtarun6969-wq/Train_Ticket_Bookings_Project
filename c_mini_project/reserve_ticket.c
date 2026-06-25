#include"headers.h"

/* ---------- RESERVE TICKET ---------- */

void reserve_ticket()
{
    FILE *fp;

    int year;
    int month;
    int day;

    char date[20];

    int train_no;
    int passengers;

    int seat_no;

    struct passenger *head=NULL;
    struct passenger *temp=NULL;
    struct passenger *newnode=NULL;

    /* YEAR */

    while(1)
    {
        printf("\nEnter Year : ");
        scanf("%d",&year);

        if(valid_year(year))
        {
            break;
        }

        printf("Tickets Can Be Booked Only For Current Year\n");
    }

    /* MONTH */

    while(1)
    {
        printf("Enter Month : ");
        scanf("%d",&month);

        if(valid_month(month))
        {
            break;
        }

        printf("Trains Are Available Only In Current Month\n");
    }

    /* DAY */

    while(1)
    {
        printf("Enter Day : ");
        scanf("%d",&day);

        if(valid_day(day))
        {
            break;
        }

        printf("Booking Allowed Only For Current Date And Next 2 Days\n");
    }

    sprintf(date,
            "%04d-%02d-%02d",
            year,
            month,
            day);

    display_trains_with_availability(date);

    /* TRAIN NUMBER */

    while(1)
    {
        printf("\nEnter Train Number : ");
        scanf("%d",&train_no);

        if(train_exists(train_no))
        {
            break;
        }

        printf("Invalid Train Number\n");
    }

    if(available_seats(train_no,date)<=0)
    {
        printf("No Seats Available\n");
        return;
    }

    printf("Available Seats : %d\n",
           available_seats(train_no,date));

    /* PASSENGER COUNT */

    while(1)
    {
        printf("Enter Number Of Passengers : ");
        scanf("%d",&passengers);

        if(passengers<=0)
        {
            printf("Passenger Count Must Be Greater Than 0\n");
            continue;
        }

        if(passengers>
           available_seats(train_no,date))
        {
            printf("Only %d Seats Available\n",
                   available_seats(train_no,date));
            continue;
        }

        break;
    }

    fp=fopen("booking.txt","a");

    for(int i=1;i<=passengers;i++)
    {
        newnode=
        (struct passenger*)
        malloc(sizeof(struct passenger));

        strcpy(newnode->username,
               current_user);

        newnode->train_no=train_no;

        strcpy(newnode->date,date);

        seat_no=
        next_free_seat(train_no,date);

        newnode->seat_no=seat_no;

        printf("\nPassenger Name : ");
        scanf(" %49s",
              newnode->name);

        printf("Passenger Age : ");
        scanf("%d",
              &newnode->age);

        printf("Passenger Gender : ");
        scanf(" %9s",
              newnode->gender);

        fprintf(fp,
        "%s %d %s %d %s %d %s\n",
        newnode->username,
        newnode->train_no,
        newnode->date,
        newnode->seat_no,
        newnode->name,
        newnode->age,
        newnode->gender);

        fflush(fp);

        newnode->next=NULL;

        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }

    fprintf(fp,"\n");

    fclose(fp);

    printf("Booking Successfully Completed\n");

    temp=head;

    while(temp!=NULL)
    {
        struct passenger *del;

        del=temp;

        temp=temp->next;

        free(del);
    }
}
