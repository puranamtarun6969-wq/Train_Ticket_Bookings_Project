#include"headers.h"

/* ---------- AVAILABLE SEATS ---------- */

int available_seats(int train_no,char date[])
{
    return (5-booked_count(train_no,date));
}

