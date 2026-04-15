//Write an OOP in C++ for linked list based implementation of Stack
#include<iostream>
using namespace std;
class StackLinked{
    private:
        struct node{
            int data;
            struct node *next;
        }*top,*p,*temp;
    public:
        StackLinked(){
            top=NULL;
            p=NULL;
            temp=NULL;
        }
        void PUSH(int);
        void display();
        int POP();
};
int main(){
    StackLinked a;
    a.PUSH(10);
    a.PUSH(20);
    a.PUSH(30);
    a.PUSH(40);
    a.PUSH(50);
    a.PUSH(60);
    a.display();
    cout<<"\nPopped data:"<<a.POP();
    cout<<"\nPopped data:"<<a.POP();
    cout<<"\nPopped data:"<<a.POP();
    a.display();
}
void StackLinked::PUSH(int d){
    //temp=(struct node*)malloc(sizeof(struct node));
    temp=new struct node;
    temp->data=d;
    if(top==NULL){
        temp->next=NULL;
        top=temp;
        return;
    }
    temp->next=top;
    top=temp;
}
void StackLinked::display(){
    if(top==NULL){
        cout<<"\nSorry Stack is empty; can't print";
        return;
    }
    p=top;
    cout<<"\nThe stack contents are:\n";
    while(p!=NULL){
      cout<<p->data<<endl;
      p=p->next;
    }
}
int StackLinked::POP(){
    if(top==NULL){
        cout<<"\nSorry Stack is empty; can't print";
        return -1;
    }
    p=top;
    int x=p->data;
    top=top->next;
    delete p;
    return x;
}
