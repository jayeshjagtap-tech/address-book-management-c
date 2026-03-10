#ifndef CONTACT_H
#define CONTACT_H

#define MAX_CONTACTS 100 // maximum contacts we can store

#include <stdio.h>
#include <string.h>

// structure to store single contact
typedef struct {
    char name[50];
    char phone[20];
    char email[50];
} Contact;

// structure for address book (array of contacts)
typedef struct {
    Contact contacts[MAX_CONTACTS];
    int contactCount;
} AddressBook;

// Function prototypes
void createContact(AddressBook *addressBook);
void searchContact(AddressBook *addressBook);
void editContact(AddressBook *addressBook);
void deleteContact(AddressBook *addressBook);
void listContacts(AddressBook *addressBook);
void initialize(AddressBook *addressBook);

#endif
