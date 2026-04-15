//Write an OOP in C++ for array based implementation of Stack
#include<iostream>
#define max 10
using namespace std;
class ArrayStack{
    private:
        struct node{
            int data;
        }s[max];
        int top;
    public:
        ArrayStack(){
            top=-1;
        }
        void PUSH(int);
        void display();
        int POP();
};
int main(){
    ArrayStack a;
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
void ArrayStack::PUSH(int d){
    if(top==max-1){
        cout<<"\nSorry stack overflow; can't insert";
        return;
    }
    ++top;
    s[top].data=d;
}
void ArrayStack::display(){
    if(top==-1){
        cout<<"\nSorry Stack Underflow; can't print";
        return;
    }
    cout<<"\nThe stack contents are:\n";
    for(int i=top;i>=0;i--)
    cout<<s[i].data<<endl;
}
int ArrayStack::POP(){
    int x;
    if(top==-1){
        cout<<"\nSorry Stack Underflow; can't print";
        return -1;
    }
    x=s[top].data;
    --top;
    return x;
}
