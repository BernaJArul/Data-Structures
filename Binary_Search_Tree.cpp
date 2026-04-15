//Implementation of Binary Search Tree
#include<iostream>
using namespace std;
class BinarySearch{
    private:
        struct node{
            int data;
            struct node *left;
            struct node *right;
        }*root,*temp;
    public:
        BinarySearch(){
            root = NULL;
            temp = NULL;
        }
        struct node *createnode(int); //Allot memory & create a node
        struct node *insert(struct node*,int); //Recursive insertion
        void preorder (struct node*); //Recursive preorder
        void postorder (struct node*); //Recursive preorder
        void inorder (struct node*); //Recursive preorder
        void decending (struct node*); //Recursive decending order
        struct node *minimum(struct node*); //Recursive minimum
        struct node *maximum(struct node*); //Recursive maximum
        struct node* Delete(struct node*,int); //Recursive deletion

        void insert(int); //Dummy insert to invoke recursive insertion
        void preorder(); //Dummy preorder to invoke recursive preorder
        void postorder(); //Dummy preorder to invoke recursive postorder
        void inorder(); //Dummy preorder to invoke recursive postorder
        void decending(); //Dummy preorder to invoke recursive decending order
        int minimum(); //Dummy minimum to invoke recursive minimum
        int maximum(); //Dummy minimum to invoke recursive maximum
        void Delete(int); //Dummy delete to invoke recursive deletion
};
int main(){
    BinarySearch b;
    b.insert(15);
    b.insert(4);
    b.insert(10);
    b.insert(9);
    b.insert(20);
    b.insert(25);
    b.insert(3);
    b.insert(8);
    b.insert(18);
    cout<<"\nPreorder sequence:";
    b.preorder();
    cout<<"\nPostorder sequence:";
    b.postorder();
    cout<<"\nInorder sequence:";
    b.inorder();
    cout<<"\nDecending order sequence:";
    b.decending();
    cout<<"\nMinimum element in BST:"<<b.minimum();
    cout<<"\nMaximum element in BST:"<<b.maximum();
    b.Delete(9);
    cout<<"\nInorder after deletion of 9:";
    b.inorder();
    b.Delete(20);
    cout<<"\nInorder after deletion of 20:";
    b.inorder();
    return 0;
}
//Algorithm to create a New Node
BinarySearch::node *BinarySearch::createnode(int d){ //Allot memory & create a node
    temp=new struct node;
    temp -> data = d;
    temp -> left = NULL;
    temp -> right = NULL;
    return temp;
}
//Algorithm for Recursive insertion
BinarySearch::node *BinarySearch::insert(struct node* T,int d){//Recursive insertion
    if(T==NULL)
        T=createnode(d);
    else if(d>T->data)
        T->right = insert (T->right, d);
    else if(d<T->data)
        T->left = insert (T->left, d);
    return T;
}
//Algorithm for Recursive Preorder traversal
void BinarySearch:: preorder (struct node*T){
    if(T!=NULL)    {
        cout<<T->data<<"\t";
        preorder(T->left);
        preorder(T->right);
    }
}
//Algorithm for Recursive postorder traversal
void BinarySearch:: postorder (struct node*T){
    if(T!=NULL)    {
        postorder(T->left);
        postorder(T->right);
        cout<<T->data<<"\t";
    }
}
//Algorithm for Recursive inorder traversal
void BinarySearch:: inorder (struct node*T){
    if(T!=NULL)    {
        inorder(T->left);
        cout<<T->data<<"\t";
        inorder(T->right);
    }
}
//Algorithm for Recursive decending order traversal
void BinarySearch:: decending (struct node*T){
    if(T!=NULL)    {
        decending(T->right);
        cout<<T->data<<"\t";
        decending(T->left);
    }
}
//Algorithm for Dummy insert to invoke recursive insertion
void BinarySearch:: insert(int d){
    root = insert(root,d);
}
//Algorithm for Dummy preorder to invoke recursive preorder
void BinarySearch:: preorder(){
    preorder(root);
}
//Algorithm for Dummy postorder to invoke recursive preorder
void BinarySearch:: postorder(){
    postorder(root);
}
//Algorithm for Dummy inorder to invoke recursive preorder
void BinarySearch:: inorder(){
    inorder(root);
}
//Algorithm for Dummy inorder to invoke recursive decending order
void BinarySearch:: decending(){
    decending(root);
}

//Algorithm for Recursive minimum
BinarySearch::node *BinarySearch::minimum(struct node*T){
    while(T->left!=NULL)
        T=T->left;
    return T;
}
//Algorithm for Dummy minimum to invoke recursive minimum
int BinarySearch:: minimum(){
    return(minimum(root)->data);
}
//Algorithm for Recursive maximum
BinarySearch::node *BinarySearch::maximum(struct node*T){
    while(T->right!=NULL)
        T=T->right;
    return T;
}
//Algorithm for Dummy minimum to invoke recursive minimum
int BinarySearch:: maximum(){
    return(maximum(root)->data);
}
BinarySearch::node *BinarySearch::Delete(struct node* T,int d){
    //First search the node to be deleted
   if (T==NULL)
        return T;
   else if(d>T->data)
       T->right=Delete(T->right,d);
   else if(d<T->data)
       T->left=Delete(T->left,d);
  //Node to be deleted have been located at this point - Now delete
   else{ //Case 1: 0 child
      if(T->left ==NULL && T->right ==NULL){
           T=NULL;
                 delete T;
                }
    //Case 2: 1 child (right child only)
   else if(T->left==NULL ){
              temp=T;
               T=T->right;
                delete temp;
                }
   //Case 2: 1 child (left child only)
  else if(T->right==NULL ){
              temp=T;
               T=T->left;
                delete temp;
           }
 //Case 3: 2 children (i.e T->left !=NULL && T->right!+NULL)
   else {
        temp=minimum(T->right); //find min element node in right subtree
        T->data=temp->data;  //duplicate the data node to be removed
       //Now the problem will be reduced to case 1 or case 2
       //Now remove the duplicate element by calling the algorithm again
         T->right=Delete(T->right,T->data);
       }
    }
 return T;
}
void BinarySearch::Delete(int d){
    root=Delete(root,d);
}
