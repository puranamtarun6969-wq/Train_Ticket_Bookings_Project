#include"headers.h"

/* ---------- VALID YEAR ---------- */

int valid_year(int year)
{
    time_t t;
    struct tm *today;

    t=time(NULL);
    today=localtime(&t);

    if(year==(today->tm_year+1900))
    {
        return 1;
    }

    return 0;
}

/* ---------- VALID MONTH ---------- */

int valid_month(int month)
{
    time_t t;
    struct tm *today;

    t=time(NULL);
    today=localtime(&t);

    if(month==(today->tm_mon+1))
    {
        return 1;
    }

    return 0;
}

/* ---------- VALID DAY ---------- */

int valid_day(int day)
{
    time_t t;
    struct tm *today;

    int current_day;

    t=time(NULL);
    today=localtime(&t);

    current_day=today->tm_mday;

    if(day>=current_day &&
       day<=current_day+2)
    {
        return 1;
    }

    return 0;
}
