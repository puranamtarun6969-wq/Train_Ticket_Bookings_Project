#include"headers.h"

/* ---------- SIGNUP ---------- */

void signup()
{
    FILE *fp;

    char username[50];
    char password[50];

    char file_user[50];
    char file_pass[50];

    int found=0;
    int attempts=0;

    while(1)
{
    found=0;

    printf("\nEnter Username : ");
    scanf(" %49s",username);

    fp=fopen("users.txt","r");

    if(fp!=NULL)
    {
        while(fscanf(fp,"%s %s",
                     file_user,
                     file_pass)==2)
        {
            if(strcmp(username,file_user)==0)
            {
                found=1;
                break;
            }
        }

        fclose(fp);
    }

    if(found)
    {
        printf("Username Already Exists\n");
        continue;
    }

    break;
}
    while(attempts<5)
    {
        printf("Enter Password : ");
        scanf(" %49s",password);

        if(valid_password(password))
        {
            fp=fopen("users.txt","a");

            fprintf(fp,"%s %s\n",
                    username,
                    password);

            fclose(fp);

            printf("Signup Successful\n");

            return;
        }

        printf("\nInvalid Password\n");
        printf("Password Must Contain:\n");
        printf("1. Minimum 8 Characters\n");
        printf("2. One Uppercase Letter\n");
        printf("3. One Lowercase Letter\n");
        printf("4. One Number\n");
        printf("5. One Special Character\n");

        attempts++;
    }

    printf("TIME OUT\n");
}
