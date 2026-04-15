//Write an OOP in C++ for array based implementation of Queue
#include<iostream>
#define max 10
using namespace std;
class ArrayQueue{
    private:
        struct node{
            int data;
        }s[max];
        int front,rear;
    public:
        ArrayQueue(){
            front=-1;
            rear=-1;
        }
        void ENQUEUE(int);
        void display();
        int DEQUEUE();
};
int main(){
    ArrayQueue a;
    a.ENQUEUE(10);
    a.ENQUEUE(20);
    a.ENQUEUE(30);
    a.ENQUEUE(40);
    a.ENQUEUE(50);
    a.ENQUEUE(60);
    a.display();
    cout<<"\nDEQUEUED data:"<<a.DEQUEUE();
    cout<<"\nDEQUEUED data:"<<a.DEQUEUE();
    cout<<"\nDEQUEUED data:"<<a.DEQUEUE();
    a.display();
}
void ArrayQueue::ENQUEUE(int d){
    if(rear==max-1){
        cout<<"\nSorry Queue overflow; can't insert";
        return;
    }
    if (front==-1)
        ++front;
    ++rear;
    s[rear].data=d;
}
void ArrayQueue::display(){
    if(front==-1){
        cout<<"\nSorry Queue Underflow; can't print";
        return;
    }
    cout<<"\nThe Queue contents are:\n";
    for(int i=front;i<=rear;i++)
    cout<<s[i].data<<"\t";
    cout<<"\nfront="<<front<<"\trear="<<rear;
}
int ArrayQueue::DEQUEUE(){
    int x;
    if(front==-1){
        cout<<"\nSorry Queue Underflow; can't print";
        return -1;
    }
    x=s[front].data;
    ++front;
    return x;
}
