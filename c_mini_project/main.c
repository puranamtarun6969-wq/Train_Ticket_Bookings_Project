#include"headers.h"

int main()
{
    int choice;

    initialize_files();

    while(1)
    {
        printf("\n");
        printf("1. Sign Up\n");
        printf("2. Sign In\n");
        printf("3. Exit\n");

        printf("\nEnter Choice : ");
        scanf(" %d",&choice);

        switch(choice)
        {
            case 1:
                signup();
                break;

            case 2:
                signin();
                break;

            case 3:
                printf("Thank You\n");
                exit(0);

            default: 
                printf("Invalid Choice\n");
        }
    } 

    return 0;
} 

