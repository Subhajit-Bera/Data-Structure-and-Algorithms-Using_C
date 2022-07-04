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


void insert()  //This function simply insert the node at the end
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
    }
    printf("\n\tData inserted Successfully :)\n");
}

void deleteAtEnd()
{
    if(head==NULL)
    {
        printf("\n\tNo data present in this List ");
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
        del=head->prev;
        head->prev->prev->next=head;
        head->prev=head->prev->prev;
    }
    printf("\n\tValue Deleted from the List  : %d",del->data);
    free(del);
}
void traverse()
{
    if(head==NULL)
    {
        printf("\n\tNo Data present in the List");
        return;
    }
    node *ref=head;
    printf("\n\tData present in the List : ");
    do
    {
        printf("\n\t%d\n",ref->data);
        ref=ref->next;
    } while (ref != head);      
}

int main()
{
    insert();
    insert();
    insert();
    insert();

    traverse();

    deleteAtEnd();
    traverse();
    deleteAtEnd();
    traverse();
    deleteAtEnd();
    traverse();
    deleteAtEnd();
    traverse();

    return 0;
}
