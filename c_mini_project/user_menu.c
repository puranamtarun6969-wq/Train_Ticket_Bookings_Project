#include"headers.h"

/* ---------- USER MENU ---------- */

void user_menu()
{
    char choice;

    while(1)
    {
        printf("\n------ USER MENU ------\n");

        printf("R - Reserve Ticket\n");
        printf("B - Booking Details\n");
        printf("C - Cancel Ticket\n");
        printf("L - Logout\n");

        printf("Enter Choice : ");
        scanf(" %c",&choice);

        if(choice=='R' || choice=='r')
        {
            reserve_ticket();
        }
        else if(choice=='B' || choice=='b')
        {
            booking_details();
        }
        else if(choice=='C' || choice=='c')
        {
            cancel_ticket();
        }
        else if(choice=='L' || choice=='l')
        {
            return;
        }
        else
        {
            printf("Invalid Choice\n");
        }
    }
}
