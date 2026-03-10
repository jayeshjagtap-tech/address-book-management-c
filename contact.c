#include "contact.h"

// Function to create new contact
void createContact(AddressBook *addressBook) {
    if (addressBook->contactCount >= MAX_CONTACTS) {
        printf("Address book is full! Cannot add more contacts.\n");
        return;
    }

    Contact newContact;
    printf("Enter Name: ");
    scanf(" %[^\n]", newContact.name); // read full string with spaces
    printf("Enter Phone: ");
    scanf(" %[^\n]", newContact.phone);
    printf("Enter Email: ");
    scanf(" %[^\n]", newContact.email);

    addressBook->contacts[addressBook->contactCount++] = newContact;
    printf("Contact added successfully!\n");
}

// Function to list all contacts
void listContacts(AddressBook *addressBook) {
    if (addressBook->contactCount == 0) {
        printf("Address book is empty!\n");
        return;
    }

    printf("\n--- Contact List ---\n");
    for (int i = 0; i < addressBook->contactCount; i++) {
        printf("%d. %s | %s | %s\n",
               i + 1,
               addressBook->contacts[i].name,
               addressBook->contacts[i].phone,
               addressBook->contacts[i].email);
    }
    printf("--------------------\n");
}

// Function to search contact by name
void searchContact(AddressBook *addressBook) {
    char name[50];
    printf("Enter name to search: ");
    scanf(" %[^\n]", name);

    for (int i = 0; i < addressBook->contactCount; i++) {
        if (strcmp(addressBook->contacts[i].name, name) == 0) {
            printf("Contact found!\n");
            printf("%s\n", addressBook->contacts[i].name);
            printf("%s\n", addressBook->contacts[i].phone);
            printf("%s\n", addressBook->contacts[i].email);
            return;
        }
    }
    printf("No contact found with name: %s\n", name);
}

// Function to edit contact
void editContact(AddressBook *addressBook)
{
    char name[50];
    printf("Enter the name of the contact to edit: ");
    scanf(" %[^\n]", name);

    // Search for the contact
    for (int i = 0; i < addressBook->contactCount; i++)
    {
        if (strcmp(addressBook->contacts[i].name, name) == 0)
        {
            int choice;
            printf("\nContact found: %s | %s | %s\n",
                   addressBook->contacts[i].name,
                   addressBook->contacts[i].phone,
                   addressBook->contacts[i].email);

            printf("\nWhat do you want to edit?\n");
            printf("1. Name\n");
            printf("2. Phone\n");
            printf("3. Email\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch (choice)
            {
                case 1:
                    printf("Enter new Name: ");
                    scanf(" %[^\n]", addressBook->contacts[i].name);
                    printf("Name updated successfully!\n");
                    break;
                case 2:
                    printf("Enter new Phone: ");
                    scanf(" %[^\n]", addressBook->contacts[i].phone);
                    printf("Phone updated successfully!\n");
                    break;
                case 3:
                    printf("Enter new Email: ");
                    scanf(" %[^\n]", addressBook->contacts[i].email);
                    printf("Email updated successfully!\n");
                    break;
                default:
                    printf("Invalid choice! No changes made.\n");
            }
            return; // Exit after editing
        }
    }

    printf("No contact found with name: %s\n", name);
}



// Function to delete contact
void deleteContact(AddressBook *addressBook) {
    char name[50];
    printf("Enter name of contact to delete: ");
    scanf(" %[^\n]", name);

    for (int i = 0; i < addressBook->contactCount; i++) {
        if (strcmp(addressBook->contacts[i].name, name) == 0) {
            for (int j = i; j < addressBook->contactCount - 1; j++) {
                addressBook->contacts[j] = addressBook->contacts[j + 1];
            }
            addressBook->contactCount--;
            printf("Contact deleted successfully!\n");
            return;
        }
    }
    printf("No contact found with name: %s\n", name);
}
