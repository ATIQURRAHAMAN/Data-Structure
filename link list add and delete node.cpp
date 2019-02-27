#include<iostream>
#include<new>
using namespace std;
struct node{
   int roll;
   node *next;
};
node *root=NULL,*prntptr=NULL,*nextptr;
void create_list(int n);
void print_list(void);
void add_list_begin(int n);
void add_list_position(int n);

int main(){
   create_list(10);
   create_list(100);
   create_list(1000);
   create_list(10000);
   print_list();

   add_list_begin(0);
   print_list();
   return 0;
}
void create_list(int n){
   if(root == NULL){
      root = new node();
      root->roll=n;
      root -> next = NULL;
      nextptr = root;
   }
   else{
     node *newnode = new node();
     newnode->roll=n;
     newnode -> next = NULL;
     nextptr -> next = newnode;
     nextptr = nextptr -> next;
   }
}
void print_list(void){
   cout<<"Print function start\n";
   if(prntptr==NULL){
     prntptr=root;
     while(prntptr->next!=NULL){
        cout<<prntptr->roll<<endl;
        prntptr=prntptr->next;
     }
   }
   prntptr=NULL;
   cout<<"Print function end\n\n";
}
void add_list_begin(int n){
    cout<<"Add list in begin\n";
    node *newnode=new node();
    newnode->roll=n;
    newnode->next=root;
    root=newnode;
    cout<<"End add list function\n\n";
}

void add_list_position(int n){
    node *lptr=NULL,*rptr=root;
    while(rptr->roll<n){
        lptr=rptr;
        rptr=rptr->next;
        if(rptr->next==NULL) break;
    }

}
