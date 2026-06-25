#include"headers.h"

/* ---------- ADD TRAIN ---------- */

void add_train()
{
    FILE *fp;

    int train_no;
    char train_name[100];

    while(1)
    {
        printf("\nEnter Train Number : ");
        scanf("%d",&train_no);

        if(train_no<=0)
        {
            printf("Invalid Train Number\n");
            continue;
        }

        if(train_exists(train_no))
        {
            printf("Train Number Already Exists\n");
            continue;
        }

        break;
    }

    printf("Enter Train Name : ");
    scanf(" %[^\n]",train_name);

    fp=fopen("trains.txt","a");

    fprintf(fp,"%d %s\n",
            train_no,
            train_name);

    fclose(fp);

    printf("Train Added Successfully\n");
}
