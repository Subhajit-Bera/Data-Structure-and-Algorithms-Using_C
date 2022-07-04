#include<stdio.h>
#include<stdlib.h>

typedef struct node 
{
    int data;
    struct node *next;
    struct node *prev;
}node;

node *head=NULL;

node *createNode()
{
    node *temp;
    temp=(node*)malloc(sizeof(node));
    return temp;
}

void insertAtEnd()
{
    node *temp=createNode();
    printf("\n\tEnter the data : ");
    scanf("%d",&temp->data);
    temp->prev=NULL;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
        head->prev=head;
        head->next=head;
    }
    else
    {
        temp->prev=head->prev;
        temp->next=head;
        head->prev->next=temp;
        head->prev=temp;
    }
    printf("\n\tData inserted Successfully\n");
}

void traverse()
{
    if(head==NULL)
    {
        printf("\n\tNo data present in the List : ");
        return;
    }
    node *ref=head;
    printf("\n\tNodes present in the List : ");
    do
    {
        printf("\n\t%d\n",ref->data);
        ref=ref->next;
    } while (ref != head);
    
}

int main()
{
    insertAtEnd();
    insertAtEnd();
    insertAtEnd();
    insertAtEnd();

    traverse();

    return 0;
}