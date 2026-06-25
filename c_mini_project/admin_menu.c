#include"headers.h"

/* ---------- ADMIN MENU ---------- */

void admin_menu()
{
    char choice;

    while(1)
    {
        printf("\n------ ADMIN MENU ------\n");

        printf("A - Add Train\n");
        printf("V - View Trains\n");
        printf("L - Logout\n");

        printf("Enter Choice : ");
        scanf(" %c",&choice);

        if(choice=='A' || choice=='a')
        {
            add_train();
        }
        else if(choice=='V' || choice=='v')
        {
            display_trains();
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
