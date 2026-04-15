//OOP in C++ - Array based implementation of List ADT
#include<iostream>
using namespace std;
#define max 10
class arraylist{
    private:
        int top;
        struct node{
            int data;
        }s[max];
    public:
        arraylist(){
            top=-1;
        }
        void insert(int);
        void display();
        int maximum();
        int minimum();
        void deletedata(int);
        void deletepos(int);
        void insertatfirst(int);
        void insertatpos(int,int);
        void modify(int,int);
};
int main(){
    arraylist ob;
    cout<<"\nThe max value in the list:"<<ob.maximum();
    ob.insert(54);
    ob.insert(34);
    ob.insert(60);
    ob.insert(90);
    ob.insert(12);
    ob.insert(45);
    ob.insert(99);
    ob.insert(69);
    cout<<"\nThe contents of the list are:";
    ob.display();
    cout<<"\nThe max value in the list:"<<ob.maximum();
    cout<<"\nThe min value in the list:"<<ob.minimum();
    ob.deletedata(90);
    cout<<"\nThe contents of the list are:";
    ob.display();
    ob.deletepos(2);
    cout<<"\nThe contents of the list are:";
    ob.display();
    ob.insertatfirst(200);
    cout<<"\nThe contents of the list are:";
    ob.display();
    ob.insertatpos(300,3);
    cout<<"\nThe contents of the list are:";
    ob.display();
    ob.modify(12,21);
    cout<<"\nThe contents of the list are:";
    ob.display();
    return 0;
}
//Algorithm for Insertion in an Array based List
void arraylist::insert(int d){
    if(top==max-1){
        cout<<"\n sorry the list is full";
        return;
    }
    ++top;
    s[top].data=d;
}
//Algorithm for Traversal/Display in an Array based List
void arraylist::display(){
  if(top==-1){
  cout<<"sorry list is empty";
  return;
}
  for(int i=0;i<=top;i++)
      cout<<s[i].data<<" ";
  cout<<"\nCurrent top value:"<<top;
}
//Algorithm for finding Max element in an Array based List
int arraylist::maximum(){
  if(top==-1){
    cout<<"sorry list is empty";
      return -1;
  }
   int ma;
   ma=s[0].data;
   for(int i=1;i<=top;i++)
      if(ma<s[i].data)
         ma=s[i].data;
    return ma;
}
//Algorithm for finding Min element in an Array based List
int arraylist::minimum(){
  if(top==-1){
    cout<<"sorry list is empty";
      return -1;
  }
   int mi;
   mi=s[0].data;
   for(int i=1;i<=top;i++)
      if(mi>s[i].data)
         mi=s[i].data;
    return mi;
}
//Algorithm for deletion of element (based on value in an Array based List
void arraylist::deletedata(int d){
  if(top==-1){
    cout<<"sorry list is empty";
      return;
  }
  for(int i=0;i<=top;i++)
      if(s[i].data==d)
          while(i<top){
              s[i] = s[i+1];
              ++i;
          }
  --top;
 }
   
//Algorithm for deletion of element (based on position in an Array based List
void arraylist::deletepos(int pos){
  if(top==-1){
    cout<<"sorry list is empty";
      return;
  }
  for(int i=0;i<=top;i++)
      if(i==pos)
          while(i<top){
              s[i] = s[i+1];
              ++i;
          }
  --top;
 }
//Algorithm for inserting at first position
void arraylist::insertatfirst(int d) {
    if(top == max-1)     {
        cout<<"Sorry, the list is full";
        return;
    }
    for(int i=top; i>=0; i--)
        s[i+1]=s[i];

    s[0].data=d;
    top++;
}

//Algorithm for inserting at a particular position
void arraylist::insertatpos(int d,int pos){
    if(top == max-1)     {
        cout<<"Sorry, the list is full";
        return;
    }
    for(int i=top; i>=pos; i--)
        s[i+1]=s[i];
    s[pos].data=d;
    top++;
}
//Algorithm for modifying a value in a List
void arraylist::modify(int old,int new1) {
    if(top == -1){
         cout<<"Sorry, the list is empty";
        return;
    }
    for(int i=0;i<=top;i++)
          if(s[i].data==old)
              s[i].data=new1;
}
