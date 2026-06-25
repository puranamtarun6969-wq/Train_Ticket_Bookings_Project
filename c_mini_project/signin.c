#include"headers.h"

/* ---------- SIGNIN ---------- */

void signin()
{
    FILE *fp;

    char username[50];
    char password[50];

    char file_user[50];
    char file_pass[50];

    int found;
    int attempts=0;

    while(attempts<5)
    {
        found=0;

        printf("\nEnter Username : ");
        scanf(" %49s",username);

        printf("Enter Password : ");
        scanf(" %49s",password);

        if(strcmp(username,"admin")==0 &&
           strcmp(password,"Admin123@")==0)
        {
            printf("\nWelcome Admin\n");

            admin_menu();

            return;
        }

        fp=fopen("users.txt","r");

        if(fp==NULL)
        {
            printf("No Users Found\n");
            return;
        }

        while(fscanf(fp,"%s %s",
                     file_user,
                     file_pass)==2)
        {
            if(strcmp(username,file_user)==0 &&
               strcmp(password,file_pass)==0)
            {
                found=1;
                break;
            }
        }

        fclose(fp);

        if(found)
        {
            strcpy(current_user,username);

            printf("\nWelcome %s\n",
                   current_user);

            user_menu();

            return;
        }

        printf("Invalid Username Or Password\n");

        attempts++;
    }

    printf("TIME OUT\n");
}
