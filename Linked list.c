#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

void main(){
    struct node{
        int num;
        struct node *ptr;
    };
    typedef struct node NODE;
    NODE *head,*first,*temp;
    int count=0;
    int choice=1;
    first=0;

    while(choice){
        head=(NODE*)malloc(sizeof(NODE));
        printf("Enter the item:\n");
        scanf("%d",&head->num);
        if(first!=0){
            temp->ptr=head;
            temp=head;
        }
        else{
            first=temp=head;
        }
        fflush(stdin);
        printf("Do you wanna continue(enter 0 or 1)?\n");
        scanf("%d",&choice);
    }
    temp->ptr=0;
    temp=first;
    printf("\n Status of the link\n");
    while(temp!=0){
        printf("%d\n",temp->num);
        count ++;
        temp=temp->ptr;

    }
    printf("NULL\n");
    printf("NO of nodes in the list=%d\n",count);
}
