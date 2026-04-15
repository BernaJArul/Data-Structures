//Disjoint Set Implementation
#include<iostream>
#define MAX 20
using namespace std;

class DisjointSet{
 private:
  struct node{
   int data;
   int rank;
   struct node *parent;
 };
 struct node* s[MAX];
 public:
    DisjointSet();
    void MakeSet(struct node *, int);
    void Makeset(int, int);
    struct node* Find(struct node*);
    void Union(struct node*, struct node*);
    void Link(struct node*, struct node*);
    struct node* getnode(int);
};
DisjointSet::DisjointSet(){
         for(int i = 0;i<MAX;i++)
          s[i]=new node;
     }
void DisjointSet::MakeSet(struct node *x, int d){
       x -> data = d ;
       x -> rank = 0;
       x -> parent = x;
  }
void DisjointSet::Makeset(int i, int d){
        MakeSet(s[i],d);
   }
DisjointSet::node* DisjointSet::Find(struct node* x){
         if(x!=x->parent)
             x->parent=Find(x->parent);
         return x->parent;
   }
void DisjointSet::Union(struct node* x, struct node* y){
         Link(Find(x),Find(y));
    }
void DisjointSet::Link(struct node* x, struct node* y){
         if(x->rank>y->rank)
             y->parent = x;
         else{
             x->parent = y;
             if(x->rank==y->rank)
                 y->rank++;
         }
    }
DisjointSet::node* DisjointSet::getnode(int i) {
        return s[i];
    }
int main(){
    DisjointSet ds;
    ds.Makeset(0, 10);
    ds.Makeset(1, 11);
    ds.Makeset(2, 12);
    ds.Makeset(3, 13);
    ds.Makeset(4, 14);
    ds.Makeset(5, 15);
    ds.Makeset(6, 16);
    ds.Makeset(7, 17);
    ds.Makeset(8, 18);
    ds.Makeset(9, 19);
    cout<<"\nFind(13):"<<ds.Find(ds.getnode(3))->data;
    cout<<"\nFind(17):"<<ds.Find(ds.getnode(7))->data;
    ds.Union(ds.getnode(0),ds.getnode(5));
    ds.Union(ds.getnode(1),ds.getnode(7));
    ds.Union(ds.getnode(3),ds.getnode(8));
    //ds.Union(ds.getnode(0),ds.getnode(3));
    cout<<"\nFind(13):"<<ds.Find(ds.getnode(3))->data;
    cout<<"\nFind(10):"<<ds.Find(ds.getnode(0))->data;
    ds.Union(ds.getnode(2),ds.getnode(6));
    ds.Union(ds.getnode(4),ds.getnode(9));
    ds.Union(ds.getnode(4),ds.getnode(5));
    ds.Union(ds.getnode(2),ds.getnode(7));
    ds.Union(ds.getnode(1),ds.getnode(3));
    cout<<"\nFind(13):"<<ds.Find(ds.getnode(3))->data;
    cout<<"\nFind(12):"<<ds.Find(ds.getnode(3))->data;
    cout<<"\nFind(11):"<<ds.Find(ds.getnode(3))->data;
    cout<<"\nFind(10):"<<ds.Find(ds.getnode(0))->data;
    cout<<"\nFind(14):"<<ds.Find(ds.getnode(4))->data;
    return 0;
}
