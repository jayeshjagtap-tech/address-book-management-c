#include "contact.h"

int main() {
    AddressBook addressBook;
    initialize(&addressBook); // Load dummy contacts

    int choice;
    do {
        printf("\n--- Address Book Menu ---\n");
        printf("1. Create contact\n");
        printf("2. Edit contact\n");
        printf("3. Search contact\n");
        printf("4. Delete contact\n");
        printf("5. List contacts\n");
        printf("6. Exit\n");
        printf("Enter your choice (1-6): ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            createContact(&addressBook);
            break;
        case 2:
            editContact(&addressBook);
            break;
        case 3:
            searchContact(&addressBook);
            break;
        case 4:
            deleteContact(&addressBook);
            break;
        case 5:
            listContacts(&addressBook);
            break;
        case 6:
            printf("Exiting program. Goodbye!\n");
            break;
        default:
            printf("Invalid option! Enter a number between 1 and 6.\n");
            break;
        }
    } while (choice != 6);

    return 0;
}
