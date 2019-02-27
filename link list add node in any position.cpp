#include<iostream>
#include<new>
using namespace std;
struct node{
   int roll;
   node *next;
};
node *root=NULL,*nextptr;
void create_list(int n);
void print_list(void);
void insert_any_position(int n);
int main(){
   create_list(1);
   create_list(3);
   create_list(5);
   create_list(7);
   print_list();
   insert_any_position(0);
   insert_any_position(2);
   insert_any_position(8);
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
     nextptr=nextptr->next;
   }
}

void insert_any_position(int n){
   node *atptr=NULL;
   nextptr=root;

   while(nextptr->roll<n && nextptr->next!=NULL){
       atptr=nextptr;
       nextptr=nextptr->next;
   }
   node *newnode=new node();
   newnode->roll=n;
   newnode->next=NULL;

   if(atptr==NULL){
     newnode->next=root;
     root=newnode;
   }
   else if(nextptr->next==NULL){
     nextptr->next=newnode;
   }
   else{
     atptr->next=newnode;
     newnode->next=nextptr;
   }
}

void print_list(void){
   cout<<"Print function start\n";
    node *prntptr;
     prntptr=root;
     while(prntptr->next!=NULL){
        cout<<prntptr->roll<<endl;
        prntptr=prntptr->next;
     }
     cout<<prntptr->roll<<endl;
   cout<<"Print function end\n\n";
}
