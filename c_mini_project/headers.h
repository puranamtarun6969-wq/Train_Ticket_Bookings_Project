#ifndef _HEADERS_H_
#define _HEADERS_H_

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<time.h>

struct passenger
{
    char username[50];
    int train_no;
    char date[20];
    int seat_no;
    char name[50];
    int age;
    char gender[10];

    struct passenger *next;
};
char current_user[50];

/*---------------FORWARD DECLARATIONS---------------*/

void initialize_files();
int valid_password(char password[]);
int train_exists(int train_no);
void display_trains();
void add_train();
void admin_menu();
void signup();
void user_menu();
void signin();
int valid_year(int year);
int valid_month(int month);
int valid_day(int day);
int booked_count(int train_no,char date[]);
int available_seats(int train_no,char date[]);
int next_free_seat(int train_no,char date[]);
void display_trains_with_availability(char date[]);
void reserve_ticket();
void booking_details();
void cancel_ticket();


#endif
