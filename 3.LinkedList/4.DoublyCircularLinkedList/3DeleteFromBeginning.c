#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *prev;
    struct node *next;
}node;

node *head=NULL;

node *createNode()
{
    node *temp;
    temp=(node*)malloc(sizeof(node));
    return temp;
}

void insert() //This function simply insert the node at the end
{
    node *temp=createNode();
    printf("\n\tEnter the Data : ");
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
        temp->prev=head->next;
        temp->next=head;
        head->prev->next=temp;
        head->prev=temp;
    }
    printf("\n\tData inserted Successfully :)\n");
}
void traverse()
{
    if(head==NULL)
    {
        printf("\n\tNo data present in this List");
        return;
    }
    node *ref=head;
    printf("\n\tData present in thid List : ");
    do
    {
        printf("\n\t%d\n",ref->data);
        ref=ref->next;
    } while (ref !=head);
    
}

void deleteAtBeginning()
{
    if(head==NULL)
    {
        printf("\n\tNo data present in this List");
        return;
    }
    node *del;
    if(head->next==head)
    {
        del=head;
        head=NULL;
    }
    else
    {
        del=head;
        head->prev->next=head->next;
        head->next->prev=head->prev;
        head=head->next;
    }
    printf("\n\tData deleted from the list : %d",del->data);
    free(del);
}

int main()
{
    insert();
    insert();
    insert();
    insert();

    traverse();

    deleteAtBeginning();
    traverse();
    deleteAtBeginning();
    traverse();
    deleteAtBeginning();
    traverse();
    deleteAtBeginning();
    traverse();

    return 0;
}