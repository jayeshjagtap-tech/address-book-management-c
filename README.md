# Address Book Management System (C)

## Introduction
This project is a simple Address Book Management System implemented in C.  
The program allows users to store and manage contact information such as Name, Phone Number, and Email Address.  
It is a menu-driven console application that demonstrates the use of structures, modular programming, and basic string operations in C.

The goal of this project was to practice organizing code into multiple source files and implementing a small real-world application using fundamental C programming concepts.

---

## Features
The application provides the following functionalities:

- Create a new contact
- Edit an existing contact
- Search a contact by name
- Delete a contact
- Display all contacts
- Load sample contacts at startup for testing

Each contact stores the following details:
- Name
- Phone Number
- Email Address

---

## Project Structure

```
AddressBook_Project
│
├── main.c
├── contact.c
├── contact.h
├── dummy_contact.c
```

**main.c**  

Handles the user interface and menu-driven interaction. It receives user input and calls the appropriate functions.

**contact.c**

Contains the implementation of core functionalities such as creating, editing, searching, deleting, and listing contacts.

**contact.h**

This header file defines the structures used in the program and declares all functions so they can be shared across multiple source files.

**dummy_contact.c**

This file contains some predefined contacts which are loaded when the program starts. This makes it easier to test the features without manually adding contacts each time.

---

## Concepts Used
This project helped reinforce several important C programming concepts:

- Structures
- Arrays of structures
- Modular programming
- Header files
- String handling functions (`strcmp`)
- Loops and conditional statements
- Menu-driven program design

---

## How the Program Works
When the program starts, a set of dummy contacts is loaded into the address book.

The user is then presented with a menu:

1. Create contact  
2. Edit contact  
3. Search contact  
4. Delete contact  
5. List contacts  
6. Exit  

Depending on the selected option, the corresponding function is executed.

Contacts are stored in memory using a structure array inside the AddressBook data structure.

---

## Compilation and Execution

Compile the project using the GCC compiler:

```
gcc main.c contact.c dummy_contact.c -o addressbook
```

Run the executable:

```
./addressbook
```

---

## Learning Outcomes
While working on this project, I learned:

- How to design a small modular C program
- How to use structures to represent real-world data
- How to split a program into multiple source files
- How functions interact across different files using header files
- How string comparison works using `strcmp`

---

## Future Improvements
The current implementation stores contacts only in memory. Possible improvements include:

- Saving contacts to a file (CSV format)
- Loading saved contacts when the program starts
- Adding sorting functionality
- Searching contacts using phone number or email
- Creating a graphical user interface

---

## Author

Jayesh Jagtap
