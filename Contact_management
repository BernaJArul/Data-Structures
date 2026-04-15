#include <iostream>
using namespace std;

#define TABLE_SIZE 10

// Structure for Contact Node
struct Contact {
    string name;
    string phone;
    string email;
    Contact* next;
};

// Hash table array
Contact* hashTable[TABLE_SIZE];

// Initialize hash table
void initializeTable() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        hashTable[i] = NULL;
    }
}

// Hash function
int hashFunction(string key) {
    int sum = 0;
    for (int i = 0; i < key.length(); i++) {
        sum += key[i];
    }
    return sum % TABLE_SIZE;
}

// Add Contact
void addContact() {
    string name, phone, email;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Phone: ";
    cin >> phone;
    cout << "Enter Email: ";
    cin >> email;

    int index = hashFunction(name);

    Contact* newContact = new Contact();
    newContact->name = name;
    newContact->phone = phone;
    newContact->email = email;
    newContact->next = hashTable[index];

    hashTable[index] = newContact;

    cout << "Contact added successfully!\n";
}

// Search Contact
void searchContact() {
    string name;
    cout << "Enter Name to Search: ";
    cin >> name;

    int index = hashFunction(name);
    Contact* temp = hashTable[index];

    while (temp != NULL) {
        if (temp->name == name) {
            cout << "Name  : " << temp->name << endl;
            cout << "Phone : " << temp->phone << endl;
            cout << "Email : " << temp->email << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "Contact not found!\n";
}

// Modify Contact
void modifyContact() {
    string name;
    cout << "Enter Name to Modify: ";
    cin >> name;

    int index = hashFunction(name);
    Contact* temp = hashTable[index];

    while (temp != NULL) {
        if (temp->name == name) {
            cout << "Enter New Phone: ";
            cin >> temp->phone;
            cout << "Enter New Email: ";
            cin >> temp->email;
            cout << "Contact updated successfully!\n";
            return;
        }
        temp = temp->next;
    }
    cout << "Contact not found!\n";
}

// Delete Contact
void deleteContact() {
    string name;
    cout << "Enter Name to Delete: ";
    cin >> name;

    int index = hashFunction(name);
    Contact* temp = hashTable[index];
    Contact* prev = NULL;

    while (temp != NULL) {
        if (temp->name == name) {
            if (prev == NULL)
                hashTable[index] = temp->next;
            else
                prev->next = temp->next;

            delete temp;
            cout << "Contact deleted successfully!\n";
            return;
        }
        prev = temp;
        temp = temp->next;
    }
    cout << "Contact not found!\n";
}

// Display All Contacts
void displayContacts() {
    cout << "\n--- Contact List ---\n";
    for (int i = 0; i < TABLE_SIZE; i++) {
        Contact* temp = hashTable[i];
        while (temp != NULL) {
            cout << "Name  : " << temp->name << endl;
            cout << "Phone : " << temp->phone << endl;
            cout << "Email : " << temp->email << endl;
            cout << "--------------------\n";
            temp = temp->next;
        }
    }
}

// Main Function
int main() {
    int choice;
    initializeTable();

    do {
        cout << "\n=== Contact Management System ===\n";
        cout << "1. Add Contact\n";
        cout << "2. Search Contact\n";
        cout << "3. Modify Contact\n";
        cout << "4. Delete Contact\n";
        cout << "5. Display All Contacts\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addContact(); break;
            case 2: searchContact(); break;
            case 3: modifyContact(); break;
            case 4: deleteContact(); break;
            case 5: displayContacts(); break;
            case 6: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 6);

    return 0;
}

