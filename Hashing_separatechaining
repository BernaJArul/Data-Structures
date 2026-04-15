//Hashing - Separate Chaining Implementation
#include <iostream>
#define TABLE_SIZE 13
using namespace std;

class HashTable {
private:
    struct Node {
        int data;
        Node* next;
    }* table[TABLE_SIZE];// Array of pointers to the head of linked lists
public:
    // HashTable constructor initializes the hash table
    HashTable() {
        for (int i = 0; i < TABLE_SIZE; i++)
            table[i] = NULL; // Initialize all entries to NULL
    }
    Node* createNode(int);
    int hash(int key);
    void insert(int key);
    void display();
    void Delete(int key);
    Node* find(int key);
};

// Create a new node
HashTable::Node* HashTable:: createNode(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = NULL;
        return newNode;
    }

// Hash Function Implementation
int HashTable::hash(int key) {
    return key % TABLE_SIZE;
}

// Insert Key into Hash Table
void HashTable::insert(int key) {
    int index = hash(key);
    Node* newNode = createNode(key); // Create new node using the createNode function
    newNode->next = table[index]; // Insert node at the beginning of the list
    table[index] = newNode; // Update head of the list
}

// Display the Hash Table Contents
void HashTable::display() {
    cout << "\nIndex\tValue";
    for (int i = 0; i < TABLE_SIZE; i++) {
        cout << "\n" << i << "\t";
        Node* temp = table[i];
        if (temp == NULL)
            cout << "X"; // Indicates an empty slot
        else {
            while (temp != NULL) {
                cout << temp->data << " -> ";
                temp = temp->next;
            }
            cout << "X"; // End of chain
        }
    }
    cout << "\n";
}

// Find the Node with the given key in the hash table
HashTable::Node* HashTable::find(int key) {
    int index = hash(key);
    Node* temp = table[index];
    while (temp != NULL && temp->data != key)
        temp = temp->next;
    return temp; // Returns NULL if not found
}

// Delete a key from the Hash Table
void HashTable::Delete(int key) {
    int index = hash(key);
    Node* temp = table[index];
    Node* prev = NULL;

    // Traverse to find the key to delete
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // If key was not found
    if (temp == NULL) {
        cout << "\nElement not found in the hash table.";
        return;
    }

    // Key is found; now delete the node
    if (prev == NULL) // If node to delete is head node
        table[index] = temp->next;
    else
        prev->next = temp->next;
    delete temp; // Free the memory of the node
}

int main() {
    HashTable ht;
    cout<<"\nEmpty Hash Table";
    ht.display();
    ht.insert(42);
    ht.insert(55);
    ht.insert(26);
    ht.insert(30);
    ht.insert(68);
    ht.insert(38);
    ht.insert(50);
    ht.insert(63);
    cout<<"\nHash Table after Insertion";
    ht.display();

    ht.Delete(55);
    ht.Delete(63);
   
    cout<<"\nHash Table after Deletion";
    ht.display();
     

    int s;
    cout << "\nEnter data to be searched: ";
    cin >> s;
    if (ht.find(s) != NULL)
        cout << "The data " << s << " is found in the hash table.";
    else
        cout << "\nThe data " << s << " is not found";

    return 0;
}
