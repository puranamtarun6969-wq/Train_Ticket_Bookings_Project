#include"headers.h"

/* ---------- PASSWORD VALIDATION ---------- */

int valid_password(char password[])
{
    int upper=0;
    int lower=0;
    int digit=0;
    int special=0;

    int i;

    if(strlen(password)<8)
    {
        return 0;
    }

    for(i=0;password[i]!='\0';i++)
    {
        if(isupper(password[i]))
        {
            upper=1;
        }
        else if(islower(password[i]))
        {
            lower=1;
        }
        else if(isdigit(password[i]))
        {
            digit=1;
        }
        else
        {
            special=1;
        }
    }

    if(upper && lower && digit && special)
    {
        return 1;
    }

    return 0;
}
