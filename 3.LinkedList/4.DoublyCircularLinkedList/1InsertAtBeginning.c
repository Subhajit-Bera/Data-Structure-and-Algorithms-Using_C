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

void insertAtBeginning()
{
    node *temp=createNode();
    printf("\n\tEnter the Data : ");
    scanf("%d",&temp->data);
    temp->next=NULL;
    temp->prev=NULL;
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
        head=head->prev;
    }
    printf("\n\tData inserted Successfully\n");
}

void traverse()
{
    if(head==NULL)
    {
        printf("\n\tThe List is empty");
        return;
    }
    node *ref=head;
    printf("\n\tNodes present in this List : ");
    do
    {
        printf("\n\t%d\n",ref->data);
        ref=ref->next;
    } while (ref!=head);
    
}


int main()
{
    insertAtBeginning();
    insertAtBeginning();
    insertAtBeginning();
    insertAtBeginning();

    traverse();

    return 0;
}