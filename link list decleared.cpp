#include<iostream>
#include<new>
using namespace std;
struct node{
   int roll;
   node *next;
};
node *root=NULL,*nextptr,*putptr;

void create_list(void);
void put_value(int n);

int main(){
   for(int i=0;i<4;i++){
      create_list();
   }
   putptr=root;
   for(int i=1;i<5;i++){
     put_value(1000+i);
   }

   return 0;
}

void create_list(void){
  if(root==NULL){
     root=new node();
     root->next=NULL;
     nextptr=root;
  }
  else{
    node *newnode;
    newnode=new node();
    nextptr->next=newnode;
    newnode->next=NULL;
    nextptr=newnode;
  }
}

void put_value(int n){
   if(putptr->next==NULL){
     cout<<"You are not able to put any value\n";
   }
   else{
     cout<<"Operation successful\n";
     putptr->roll=n;
     putptr=putptr->next;
   }
}
