#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

node *head=NULL;

node *createNode()
{
    node *temp;
    temp=(node*)malloc(sizeof(node));
    return temp;
}

void insert() //This function simply insert the data at the end
{
    node *temp=createNode();
    printf("\n\tEnter the value : ");
    scanf("%d",&temp->data);
    temp->next=NULL;
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
        ref->next=temp;
    }
     printf("\n\tInserted Succesfully\n");
}

void deleteFromEnd()  //This function delete data from end
{
    node *t=head;
    node *del;
    if(head->next==NULL)
    {
        del=head;
        head=NULL;
        printf("\n\tLast block in the list deleted successfully :)");
    }
    else
    {
        while(t->next->next != NULL)
        {
            t=t->next;
        }
        del=t->next;
        t->next=NULL;
        printf("\n\tLast block of the list deleted successfully :)");
    }
    free(del);

}

void traverse()
{
    if(head==NULL)
    {
        printf("\n\tThe list is empty");
    }
    node *ref=head;
    printf("\n\tNodes present in the List : ");
    while(ref !=NULL)
    {
        printf("\n\t%d",ref->data);
        ref=ref->next;
    }
}

int main()
{
    insert();
    insert();
    insert();

    traverse();

    deleteFromEnd();
    traverse();
    deleteFromEnd();
    traverse();
    deleteFromEnd();
    traverse();

    return 0;

}