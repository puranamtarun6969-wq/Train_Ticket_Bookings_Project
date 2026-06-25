# Train Ticket Booking System

## Project Overview

The Train Ticket Booking System is a console-based application developed in C language. The project simulates the basic functionalities of a railway reservation system, allowing users to create accounts, log in, book train tickets, view booking details, and cancel reservations. An administrator can manage train information through a separate admin interface.

The project uses file handling for permanent data storage and modular programming concepts by separating functionalities into multiple source files.

---

## Features

### User Features

* User Registration
* User Login Authentication
* View Available Trains
* Check Seat Availability
* Reserve Tickets
* View Booking Details
* Cancel Booked Tickets
* Logout

### Admin Features

* Admin Login
* Add New Trains
* Display Train Information
* Monitor Reservations
* Logout

---

## Technologies Used

* Programming Language: C
* Operating System: Linux
* Compiler: GCC
* Build Automation: Makefile
* Data Storage: Text Files
* Concepts Used:

  * Structures
  * Linked Lists
  * File Handling
  * Dynamic Memory Allocation
  * Functions
  * Modular Programming
  * Date Validation
  * User Authentication

---

## Project Structure

```text
c_mini_project/
│
├── main.c
├── headers.h
├── makefile
│
├── signup.c
├── signin.c
├── valid_password.c
│
├── admin_menu.c
├── user_menu.c
│
├── add_train.c
├── display_trains.c
├── train_exists.c
│
├── reserve_ticket.c
├── booking_details.c
├── cancel_ticket.c
│
├── available_seats.c
├── booked_count.c
├── next_free_seat.c
├── display_trains_with_availability.c
├── validity.c
├── file_init.c
│
├── users.txt
├── trains.txt
├── booking.txt
└── user.txt
```

---

## Modules Description

### User Registration

Allows new users to create an account by entering:

* Username
* Password

The credentials are stored in `users.txt`.

---

### User Login

Authenticates users using the credentials stored in `users.txt`.

---

### Train Management

Admin can:

* Add train details
* View all train details

Train information is stored in `trains.txt`.

---

### Ticket Reservation

Users can:

* Select journey date
* View available trains
* Check seat availability
* Enter passenger details
* Book tickets

Passenger details are stored in `booking.txt`.

---

### Booking Details

Users can view:

* Train Number
* Journey Date
* Seat Number
* Passenger Details

---

### Ticket Cancellation

Users can:

* Cancel previously booked tickets
* Remove reservation records from booking file

---

### Seat Allocation

The system automatically:

* Checks occupied seats
* Finds the next available seat
* Assigns seat numbers sequentially

---

### Date Validation

Booking is restricted to:

* Current Date
* Next 2 Days

Validation is performed using C Time Library functions.

---

## File Storage

### users.txt

Stores user credentials.

Example:

```text
tarun pass123
sohel abc123
```

### trains.txt

Stores train information.

Example:

```text
101 Hyderabad Vijayawada
102 Vijayawada Visakhapatnam
```

### booking.txt

Stores passenger reservation details.

Example:

```text
tarun 101 2026-06-25 1 Ram 22 Male
```

---

## Compilation

Using GCC:

```bash
gcc *.c -o project
```

---

## Using Makefile

Compile:

```bash
make
```

Run:

```bash
./project
```

Clean Executable:

```bash
make clean
```

---

## Program Flow

### Main Menu

```text
1. Sign Up
2. Sign In
3. Exit
```

### User Menu

```text
1. Display Trains
2. Reserve Ticket
3. Booking Details
4. Cancel Ticket
5. Logout
```

### Admin Menu

```text
1. Add Train
2. Display Trains
3. Logout
```

---

## Concepts Demonstrated

* Modular Programming
* Structures
* Linked Lists
* Dynamic Memory Allocation
* File Handling
* String Handling
* Authentication System
* Data Validation
* Build Automation using Makefile

---

## Advantages

* Simple User Interface
* Easy To Use
* Persistent Data Storage
* Modular Design
* Automatic Seat Allocation
* Efficient Ticket Management

---

## Future Enhancements

* Multiple Coach Support
* Waiting List Management
* PNR Generation
* Fare Calculation
* Train Search by Source and Destination
* Admin Dashboard
* Database Integration
* Online Reservation System

---

## Author

**Puranam Tarun**

B.Tech (EEE)

Train Ticket Booking System using C Language, File Handling, Linked Lists, and Makefile.
