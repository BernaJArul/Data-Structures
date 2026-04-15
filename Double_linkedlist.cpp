//OOP in C++ - Double Linked List based implementation of List ADT
#include<iostream>
using namespace std;
class DoubleList{
    private:
        struct node{
            int data;
            struct node *prev;
            struct node *next;
        }*p,*head,*temp,*tail;
    public:
        DoubleList(){
            p=NULL;
            head=NULL;    //Represents empty list
            temp=NULL;
            tail=NULL;
        }
        void insert(int);
        void displayforward();
        void displayreverse();
        void insertatend(int);
        void deletedata(int);
};
int main(){
    DoubleList ob;
    ob.insert(54);
    ob.insert(34);
    ob.insert(60);
    ob.insert(90);
    ob.insert(12);
    ob.insert(45);
    ob.insert(99);
    ob.insert(69);
    cout<<"\nThe contents of the list are:\n";
    ob.displayforward();
    cout<<"\nThe contents of the list in reverse order:\n";
    ob.displayreverse();
    ob.insertatend(100);
    cout<<"\nThe contents of the list are:\n";
    ob.displayforward();
    ob.deletedata(90);
    cout<<"\nThe contents of the list are:\n";
    ob.displayforward();
    return 0;
}
//Algorithm for inserting into List ADT(Double Linked List)
void DoubleList::insert(int d){
    temp = new struct node; //allot memory for new node
    temp->data=d;
    temp->next=NULL;
    temp->prev=NULL;
    if(head==NULL){ //if the list is empty
        head = temp;
        tail=temp;
        return;
    }
    p=head; //initialize the first node to ‘p’
    while(p->next!=NULL) //traverse till the end of the list
        p=p->next;        //gets traversed to the next node in the  list
    p->next=temp;
    temp->prev=p;
    tail=temp;
}
//Algorithm for displayforward/traversal in List ADT(Double Linked List)
void DoubleList::displayforward(){
    if(head==NULL){ //if the list is empty
        cout<<"Sorry list is empty";
        return;
    }
    p=head;
    while(p!=NULL){ //traverse till the end of the list
     cout<<p->data<<"<-->";
     p=p->next;        //gets traversed to the next node in the  list
   }
}
//Algorithm for displayreverse/traversal in List ADT(Double Linked List)
void DoubleList::displayreverse(){
    if(head==NULL){ //if the list is empty
        cout<<"Sorry list is empty";
        return;
    }
    p=tail;
    while(p!=NULL){ //traverse till the begining of the list
     cout<<p->data<<"<-->";
     p=p->prev;        //gets traversed to the prev node in the  list
   }
}
//Algorithm for inserting at end into List ADT(Double Linked List)
void DoubleList::insertatend(int d){
    temp = new struct node; //allot memory for new node
    temp->data=d;
    temp->next=NULL;
    temp->prev=NULL;
    if(head==NULL){ //if the list is empty
        head = temp;
        tail=temp;
        return;
    }
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
//Algorithm for deleting the data from a List ADT(Single Linked List)
void DoubleList::deletedata(int d){
    if(head==NULL){ //if the list is empty
        cout<<"\nSorry list is empty";
        return;
    }
    p=head;
    while(p->data!=d){
        temp=p;
        p=p->next;
    }
    temp->next = p->next;
    p->next->prev = temp;
    delete p;
}
