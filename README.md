# Train Ticket Booking System

## Introduction

The Train Ticket Booking System is a console-based application developed using the C programming language. This project simulates a railway reservation system where users can search for trains, book tickets, view booking details, cancel tickets, and manage passenger information. The project is designed to demonstrate the practical implementation of core C programming concepts such as structures, file handling, functions, arrays, pointers, and data management.

---

## Objectives

- Automate the train ticket reservation process.
- Maintain train and passenger records efficiently.
- Reduce manual effort in ticket booking and cancellation.
- Provide a simple and user-friendly interface.
- Demonstrate real-world application development using C language.

---

## Features

### User Management
- User Registration
- User Login Authentication
- Password Validation

### Train Management
- View Available Trains
- Search Train by Number
- Search Train by Source and Destination
- Display Train Details

### Ticket Booking
- Book Train Tickets
- Enter Passenger Details
- Automatic Seat Allocation
- Fare Calculation
- Ticket Generation

### Ticket Cancellation
- Cancel Existing Tickets
- Update Available Seats
- Record Cancellation Details

### Ticket Information
- View Booked Tickets
- Display Passenger Information
- Show Journey Details
- Display Fare Information

### Data Storage
- File-Based Data Storage
- Permanent Record Maintenance
- Read and Write Operations using File Handling

---

## Technologies Used

| Technology | Purpose |
|------------|----------|
| C Language | Application Development |
| GCC Compiler | Code Compilation |
| Linux/Ubuntu | Execution Environment |
| File Handling | Data Storage |
| Structures | Data Management |

---

## Concepts Used

The project implements the following C programming concepts:

- Structures
- Arrays
- Functions
- Pointers
- File Handling
- String Manipulation
- Conditional Statements
- Loops
- Modular Programming

---

## System Requirements

### Hardware Requirements

- Processor: Intel i3 or above
- RAM: 4 GB or above
- Storage: 100 MB free space

### Software Requirements

- Operating System: Linux / Ubuntu
- GCC Compiler
- Terminal

---

## Project Structure

```text
Train_Ticket_Booking/
│
├── train_ticket_booking.c
├── train_data.txt
├── passenger_data.txt
├── booking_data.txt
├── user_data.txt
└── README.md
```

---

## Functional Modules

### 1. User Module

This module manages user authentication.

Functions:
- Register New User
- Login Existing User
- Validate Credentials

---

### 2. Train Module

This module manages train information.

Functions:
- Add Train Details
- Search Train
- Display Available Trains
- Update Train Records

---

### 3. Booking Module

This module handles ticket reservations.

Functions:
- Enter Passenger Information
- Check Seat Availability
- Allocate Seats
- Generate Ticket

---

### 4. Cancellation Module

This module manages ticket cancellation.

Functions:
- Search Existing Booking
- Cancel Ticket
- Update Seat Count

---

### 5. File Management Module

This module stores and retrieves data.

Functions:
- Save Train Records
- Save Passenger Records
- Save Booking Records
- Read Stored Data

---

## Working Procedure

### Step 1: User Login

The user enters login credentials to access the system.

### Step 2: Train Search

The user searches for available trains using:
- Train Number
- Source Station
- Destination Station

### Step 3: Ticket Booking

The user enters:
- Passenger Name
- Age
- Gender
- Journey Details

The system checks seat availability and confirms booking.

### Step 4: Ticket Generation

The system generates:
- Ticket Number
- Passenger Details
- Train Information
- Fare Details

### Step 5: Ticket Cancellation

The user enters the ticket number to cancel the booking.

The system:
- Removes booking record
- Updates seat availability

---

## Data Flow

```text
User
  |
  V
Login
  |
  V
Search Train
  |
  V
Book Ticket
  |
  V
Seat Availability Check
  |
  V
Ticket Generation
  |
  V
Store Data in Files
```

---

## Compilation and Execution

### Compile

```bash
gcc train_ticket_booking.c -o train
```

### Run

```bash
./train
```

---

## Sample Menu

```text
=================================
 TRAIN TICKET BOOKING SYSTEM
=================================

1. Register User
2. Login
3. View Trains
4. Search Train
5. Book Ticket
6. View Ticket
7. Cancel Ticket
8. Exit

Enter Your Choice:
```

---

## Advantages

- Easy to Use
- Fast Reservation Process
- Reduced Manual Work
- Efficient Data Management
- Permanent Data Storage
- Simple User Interface

---

## Limitations

- Console-Based Interface
- No Online Payment Support
- Single User Environment
- Basic Security Features

---

## Future Enhancements

- Graphical User Interface (GUI)
- Online Payment Gateway
- PNR Status Tracking
- Multiple User Support
- Train Schedule Management
- Admin Dashboard
- Database Integration (MySQL)
- SMS/Email Notifications

---

## Applications

- Railway Reservation Systems
- Transportation Management
- Ticket Reservation Platforms
- Educational Projects for C Programming

---

## Conclusion

The Train Ticket Booking System is a simple and efficient railway reservation application developed using C language. It demonstrates the implementation of important programming concepts such as structures, file handling, and modular programming while providing a practical solution for train ticket booking and management.
