// DELETE A NODE FROM THE BEGINNING OF A DOUBLY LINKEDLIST


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

void insert()  //This function simply insert the node at the end
{
    node *temp=createNode();
    printf("\n\tEnter the value : ");
    scanf("\n\t%d",&temp->data);
    temp->next=NULL;
    temp->prev=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        node *ref=head;
        while(ref->next !=NULL)
        {
            ref=ref->next;
        }
        temp->prev=ref;
        ref->next=temp;
    }
    printf("\n\t SUCCESSFULLY INSERTED\n");
}

void deleteAtBeginning() //This function delete data from the beginning
{
    if(head==NULL)
    {
        printf("\n\tThe List is empty");
        return;
    }

    node *t=head;
    node *del;
    if(head->next==NULL)
    {
        del=head;
        head=NULL;
    }
    else
    {
        del=head;
        head=head->next;
        head->prev=NULL;
    }
    printf("\n\tDELETING %d\n",del->data);
    free(del);
}

void traverse()
{
    if(head==NULL)
    {
        printf("\n\tThe List is empty");
        return;
    }
    node *ref=head;
    printf("\n\tData present in this list:\n");
    while(ref != NULL)
    {
        printf("\t%d\n",ref->data);
        ref=ref->next;
    }  
}

int main()
{
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

    return 0;
}