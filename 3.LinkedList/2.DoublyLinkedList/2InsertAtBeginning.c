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

void insert()
{
    node *temp=createNode();
    printf("Enter the value:");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        head->prev=temp;
        temp->next=head;
        head=temp;
    }
    printf("Insert Successfully\n");
}

void traverse()
{
    if(head==NULL)
    {
        printf("The List is empty");
        return;
    }
    node *ref=head;
    while(ref !=NULL)
    {
        printf("%d\n",ref->data);
        ref=ref->next;
    }

}

int main()
{
    insert();
    insert();
    insert();


    traverse();

    return 0;
}