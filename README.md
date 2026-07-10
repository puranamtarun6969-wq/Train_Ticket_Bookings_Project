# 🚆 Train Ticket Booking System

> A Console-Based Railway Reservation System developed in **C Language** using **File Handling**, **Linked Lists**, **Dynamic Memory Allocation**,
> and **Modular Programming** concepts.

---

## 🎯 Project Overview

The **Train Ticket Booking System** is a console-based application that simulates the core functionalities of a railway reservation system.

The project allows users to:

✅ Create Accounts  
✅ Login Securely  
✅ View Available Trains  
✅ Check Seat Availability  
✅ Reserve Tickets  
✅ View Booking Details  
✅ Cancel Reservations  

An **Administrator Module** is also provided to manage train information and monitor reservations.

The project uses **text files for permanent data storage** and follows a **modular programming approach** by 
separating functionalities into multiple source files.

---

## ✨ Features

### 👤 User Features

- 📝 User Registration
- 🔐 User Login Authentication
- 🚆 View Available Trains
- 💺 Check Seat Availability
- 🎫 Reserve Tickets
- 📋 View Booking Details
- ❌ Cancel Booked Tickets
- 🚪 Logout

---

### 👨‍💼 Admin Features

- 🔑 Admin Login
- ➕ Add New Trains
- 🚆 Display Train Information
- 📊 Monitor Reservations
- 🚪 Logout

---

## 🛠️ Technologies Used

| Technology | Description |
|------------|------------|
| 💻 Programming Language | C |
| 🐧 Operating System | Linux |
| ⚙️ Compiler | GCC |
| 🔨 Build Automation | Makefile |
| 💾 Data Storage | Text Files |

---

## 📚 Concepts Used

- 🏗️ Structures
- 🔗 Linked Lists
- 📂 File Handling
- 🧠 Dynamic Memory Allocation
- 🔧 Functions
- 📦 Modular Programming
- 📅 Date Validation
- 🔐 User Authentication

---

## 📁 Project Structure

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

## 🧩 Modules Description

### 📝 User Registration

Allows new users to create an account by entering:

- Username
- Password

User credentials are stored in:

```text
users.txt
```

---

### 🔐 User Login

Authenticates users using credentials stored in:

```text
users.txt
```

Only valid users can access ticket booking features.

---

### 🚆 Train Management

Admin can:

- Add Train Details
- View Train Information
- Manage Train Records

Train details are stored in:

```text
trains.txt
```

---

### 🎫 Ticket Reservation

Users can:

- Select Journey Date
- View Available Trains
- Check Available Seats
- Enter Passenger Details
- Reserve Tickets

Reservation details are stored in:

```text
booking.txt
```

---

### 📋 Booking Details

Users can view:

- Train Number
- Journey Date
- Seat Number
- Passenger Name
- Age
- Gender

---

### ❌ Ticket Cancellation

Users can:

- Cancel Existing Reservations
- Remove Booking Records
- Free Reserved Seats

---

### 💺 Automatic Seat Allocation

The system automatically:

✅ Checks Occupied Seats

✅ Finds Next Available Seat

✅ Allocates Seat Numbers Sequentially

---

### 📅 Date Validation

Ticket booking is allowed only for:

- Today
- Tomorrow
- Day After Tomorrow

Validation is performed using C Time Library functions.

---

## 💾 File Storage

### 👤 users.txt

Stores user credentials.

```text
tarun pass123
sohel abc123
```

---

### 🚆 trains.txt

Stores train information.

```text
101 Hyderabad Vijayawada
102 Vijayawada Visakhapatnam
```

---

### 🎫 booking.txt

Stores reservation records.

```text
tarun 101 2026-06-25 1 Ram 22 Male
```

---

## ⚙️ Compilation

### Using GCC

```bash
gcc *.c -o project
```

---

### Using Makefile

#### Build Project

```bash
make
```

#### Run Project

```bash
./project
```

#### Remove Executable

```bash
make clean
```

---

## 🔄 Program Flow

### 🏠 Main Menu

```text
1. Sign Up
2. Sign In
3. Exit
```

---

### 👤 User Menu

```text
1. Display Trains
2. Reserve Ticket
3. Booking Details
4. Cancel Ticket
5. Logout
```

---

### 👨‍💼 Admin Menu

```text
1. Add Train
2. Display Trains
3. Logout
```

---

## 🎓 Concepts Demonstrated

- 📦 Modular Programming
- 🏗️ Structures
- 🔗 Linked Lists
- 🧠 Dynamic Memory Allocation
- 📂 File Handling
- 🔤 String Handling
- 🔐 Authentication System
- 📅 Data Validation
- 🔨 Build Automation using Makefile

---

## ✅ Advantages

- 🚀 Simple User Interface
- 🎯 Easy To Use
- 💾 Persistent Data Storage
- 📦 Modular Design
- 💺 Automatic Seat Allocation
- 🎫 Efficient Ticket Management
- 🔒 Secure User Authentication

---

## 🚀 Future Enhancements

- 🚆 Multiple Coach Support
- 📋 Waiting List Management
- 🎟️ PNR Generation
- 💰 Fare Calculation
- 🔍 Train Search by Source & Destination
- 📊 Admin Dashboard
- 🗄️ Database Integration
- 🌐 Online Reservation System

---

## 📸 Sample Workflow

```text
User Registration
        ↓
User Login
        ↓
Display Trains
        ↓
Check Seat Availability
        ↓
Reserve Ticket
        ↓
View Booking Details
        ↓
Cancel Ticket
        ↓
Logout
```

---

## 👨‍💻 Author

**Puranam Tarun**  
🎓 B.Tech (Electrical & Electronics Engineering)

---

# ⭐ Train Ticket Booking System ⭐

🚆 Developed using C Language, File Handling, Linked Lists, Dynamic Memory Allocation, and Makefile.
