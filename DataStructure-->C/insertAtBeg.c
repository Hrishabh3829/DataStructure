//lL
#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node* next;
};
struct node *temp,*head=NULL,*newNode;

void insertAtBeg(int num){
    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=num;
    newNode->next=NULL;
    
    if(head==NULL){
        head=newNode;
    }
    else{
        newNode->next=head;
        head=newNode;
    }
}

void traverse(){
    temp=head;
    printf("List contains:");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

int main(){
    
    insertAtBeg(10);
    insertAtBeg(5);
    insertAtBeg(2);
    traverse();
    return 0;
    
}
