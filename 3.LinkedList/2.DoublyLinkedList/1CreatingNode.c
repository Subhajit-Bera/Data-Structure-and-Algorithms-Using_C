#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *prev;
    struct node *next;
}node;

node *createNode()      // HERE WE ARE CREATING A FUNCTION AND WITH IN THAT WE ARE ALLOCATING THE MEMORY 
{
    node *temp;
    temp=(node*)malloc(sizeof(node));
    return temp;
}

int main()
{
    node *head=NULL;
    node *temp=createNode();
    temp->data=100;
    temp->next=NULL;
    temp->prev=NULL;
    if(head==NULL)
        head=temp;
        printf("Data : %d",temp->data);
    return 0;    
}