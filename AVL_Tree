//Implementation of AVL Tree
#include<iostream>
using namespace std;
class AVLTree{
    private:
        struct node{
            int data;
            struct node *left;
            struct node *right;
            int height;
        }*root,*temp;
    public:
        AVLTree(){
            root = NULL;
            temp = NULL;
        }
        int height (struct node *T){
        if (T==NULL)
             return 0;
        return (T->height);
        }
        int max(int a, int b){
            return (a>b)?a:b;
        }

        struct node *createnode(int); //Allot memory & create a node
        struct node *insert(struct node*,int); //Recursive insertion
        struct node *SRL(struct node *);
        struct node *SRR(struct node *);
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
    AVLTree b;
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
    cout<<"\nMinimum element in AVL:"<<b.minimum();
    cout<<"\nMaximum element in AVL:"<<b.maximum();
    b.Delete(9);
    cout<<"\nInorder after deletion of 9:";
    b.inorder();
    b.Delete(20);
    cout<<"\nInorder after deletion of 20:";
    b.inorder();
    return 0;
}
//Algorithm to create a New Node
AVLTree::node *AVLTree::createnode(int d){ //Allot memory & create a node
    temp=new struct node;
    temp -> data = d;
    temp -> left = NULL;
    temp -> right = NULL;
    temp->height = 0;
    return temp;
}
//Algorithm for SRL
AVLTree::node *AVLTree::SRL(struct node *x){
    struct node * y = x -> right;
    struct node *T2 = y->left;
    y->left=x;
    x->right=T2;
    x->height = 1+max(height(x->right),height(x->left));
    y->height = 1+max(height(y->right),height(y->left));
   return y;
}
//Algorithm for SRR
AVLTree::node *AVLTree::SRR(struct node *y){
    struct node * x = y ->left;
    struct node *T2 = x->right;
    x->right=y;
    y->left=T2;
    x->height = 1+max(height(x->right),height(x->left));
    y->height = 1+max(height(y->right),height(y->left));
   return x;
}

//Algorithm for Recursive insertion
AVLTree::node *AVLTree::insert(struct node* T,int d){//Recursive insertion
 int balance;
  if(T==NULL)
       T=createnode(d);
   else if(d>T->data)
       T->right=insert(T->right,d);
   else if(d<T->data)
       T->left=insert(T->left,d);
   //Find & update height of the node
   T->height=1+max (height(T->left),height(T->right));
   //Find balance factor  of the node
   balance = height(T->left)-height(T->right);
   if(balance > 1 && d < T->left->data)
       return SRR(T); //perform SRR
   else if (balance < -1 && d >T->right->data)
       return SRL(T); //perform SRL
   else if(balance > 1 && d > T->left->data){
       T->left = SRL(T->left); //perform SRL
       return SRR(T); //perform SRR
  }
   else if(balance < -1 && d < T->right->data){
       T->right = SRR(T->right);//perform SRR
       return SRL(T);//perform SRL
 }
 return T;
}

//Algorithm for Recursive Preorder traversal
void AVLTree:: preorder (struct node*T){
    if(T!=NULL)    {
        cout<<T->data<<"\t";
        preorder(T->left);
        preorder(T->right);
    }
}
//Algorithm for Recursive postorder traversal
void AVLTree:: postorder (struct node*T){
    if(T!=NULL)    {
        postorder(T->left);
        postorder(T->right);
        cout<<T->data<<"\t";
    }
}
//Algorithm for Recursive inorder traversal
void AVLTree:: inorder (struct node*T){
    if(T!=NULL)    {
        inorder(T->left);
        cout<<T->data<<"\t";
        inorder(T->right);
    }
}
//Algorithm for Recursive decending order traversal
void AVLTree:: decending (struct node*T){
    if(T!=NULL)    {
        decending(T->right);
        cout<<T->data<<"\t";
        decending(T->left);
    }
}
//Algorithm for Dummy insert to invoke recursive insertion
void AVLTree:: insert(int d){
    root = insert(root,d);
}
//Algorithm for Dummy preorder to invoke recursive preorder
void AVLTree:: preorder(){
    preorder(root);
}
//Algorithm for Dummy postorder to invoke recursive preorder
void AVLTree:: postorder(){
    postorder(root);
}
//Algorithm for Dummy inorder to invoke recursive preorder
void AVLTree:: inorder(){
    inorder(root);
}
//Algorithm for Dummy inorder to invoke recursive decending order
void AVLTree:: decending(){
    decending(root);
}

//Algorithm for Recursive minimum
AVLTree::node *AVLTree::minimum(struct node*T){
    while(T->left!=NULL)
        T=T->left;
    return T;
}
//Algorithm for Dummy minimum to invoke recursive minimum
int AVLTree:: minimum(){
    return(minimum(root)->data);
}
//Algorithm for Recursive maximum
AVLTree::node *AVLTree::maximum(struct node*T){
    while(T->right!=NULL)
        T=T->right;
    return T;
}
//Algorithm for Dummy minimum to invoke recursive minimum
int AVLTree:: maximum(){
    return(maximum(root)->data);
}
AVLTree::node *AVLTree::Delete(struct node* T,int d){
   int balance;
   //Find height of the node
   T->height=1+max (height(T->left),height(T->right));
   //Find balance factor  of the node
   balance = height(T->left)-height(T->right);
   if(balance > 1 && d < T->left->data)
       return SRR(T); //perform SRR
   else if (balance < -1 && d >T->right->data)
       return SRL(T); //perform SRL
   else if(balance > 1 && d > T->left->data){
       T->left = SRL(T->left); //perform SRL
       return SRR(T); //perform SRR
  }
  else if(balance < -1 && d < T->right->data){
       T->right = SRR(T->right);//perform SRR
       return SRL(T);//perform SRL
  }
    //Search the node to be deleted
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
void AVLTree::Delete(int d){
    root=Delete(root,d);
}
