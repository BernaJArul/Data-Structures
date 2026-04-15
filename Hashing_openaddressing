//Hashing - Linear Probing Implementation
#include <iostream>
#define TABLE_SIZE 13
using namespace std;

class HashTable {
private:
    struct Node {
        int data;
    } table[TABLE_SIZE];
public:
HashTable();
    int hash(int);
    void insert(int);
    void display();
    void Delete(int);
    int find(int);
};
// Initialize Hash Table
HashTable::HashTable() {
    for (int i = 0; i < TABLE_SIZE; i++)
       table[i].data = -1; // -1 indicates an empty slot
}
// Hash Function Implementation
int HashTable::hash(int key) {
    return key % TABLE_SIZE;
}
void HashTable::insert(int key) {
    int index = hash(key);
    int i = 0;
    while (table[(index + i) % TABLE_SIZE].data != -1)
        i++; //on collision looks for next vacant cell
    table[(index + i) % TABLE_SIZE].data = key;
}
// Display the Hash Table Contents
void HashTable::display() {
    cout << "\nIndex\tValue";
    for (int i = 0; i < TABLE_SIZE; i++) {
    cout << "\n" << i << "\t";
    if (table[i].data != -1)
    cout << table[i].data;
    else
    cout << "-";
    }
cout << "\n";
}
// Deletion Algorithm
void HashTable::Delete(int key) {
        int index = find(key);
        if (index == -1) {
            cout << "\nElement not found in the hash table.";
            return;
        }
        table[index].data = -1;
    }
// Find the location of key element
int HashTable::find(int key) {
        int index = hash(key);
        int i = 0;
        while (table[(index + i) % TABLE_SIZE].data != -1) {
            if (table[(index + i) % TABLE_SIZE].data == key)
                return (index + i) % TABLE_SIZE;
            i++;
        }
        return -1; // Key not found
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
    cout<<"\nEnter data to be searched:";
    cin>>s;
    if(ht.find(s)!=-1)
      cout<<"The data "<<s<<" is found at index:"<<ht.find(s);
    else
      cout<<"\nThe data "<<s<<" is not found";

return 0;
}
