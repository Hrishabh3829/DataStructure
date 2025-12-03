#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
    
};

struct node *temp,*head=NULL,*newNode;

void insertAtLast(int num){
    newNode=(struct node*)malloc(sizeof(struct node));
    
    newNode->data=num;
    newNode->next=NULL;
    
    if(head==NULL){
        head=newNode;
    }
    else{
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
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
    
    insertAtLast(10);
    insertAtLast(5);
    insertAtLast(2);
    insertAtLast(7);
    traverse();
    return 0;
    
    
}
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
    
};

struct node *temp,*head=NULL,*newNode;

void insertAtLast(int num){
    newNode=(struct node*)malloc(sizeof(struct node));
    
    newNode->data=num;
    newNode->next=NULL;
    
    if(head==NULL){
        head=newNode;
    }
    else{
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
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
    
    insertAtLast(10);
    insertAtLast(5);
    insertAtLast(2);
    insertAtLast(7);
    traverse();
    return 0;
    
    
}
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
    
};

struct node *temp,*head=NULL,*newNode;

void insertAtLast(int num){
    newNode=(struct node*)malloc(sizeof(struct node));
    
    newNode->data=num;
    newNode->next=NULL;
    
    if(head==NULL){
        head=newNode;
    }
    else{
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
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
    
    insertAtLast(10);
    insertAtLast(5);
    insertAtLast(2);
    insertAtLast(7);
    traverse();
    return 0;
    
    
}

//List contains: 10 5 2 7
