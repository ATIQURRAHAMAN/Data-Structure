#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left=NULL;
    Node* right=NULL;

};
Node* Root=NULL;

void add(int value){
    Node* nptr=new Node;
    nptr->data=value;
    nptr->left=NULL;
    nptr->right=NULL;

    if(Root==NULL){
        nptr=Root;
    }
    else{
    Node* tptr=Root;
    while(true){
        if(tptr->data>value){
        //left
            if(tptr->left=NULL){
            tptr->left=nptr;
            break;
            }
            else{
            tptr=tptr->left;
            }
        }
        else{
            if(tptr->right=NULL){
                tptr->right=nptr;
                break;

            }
            else{
                tptr=tptr->right;
            }


        }

    }


    }
}

void print(Node* node){
    if(node!=NULL){
    print(node->left);
    cout<<node->data<<"";
    print(node->right);

    }

}
int main(){
    add(10);
    add(15);
    add(20);
    add(25);
    add(30);
    add(40);
    add(50);
    add(60);
    print(Root);

}
