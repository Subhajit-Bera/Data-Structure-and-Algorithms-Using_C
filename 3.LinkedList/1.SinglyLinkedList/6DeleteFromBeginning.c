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

void insert()  //This function simply insert the data at the end
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
        while(ref->next!=NULL)
        {
            ref=ref->next;
        }
        ref->next=temp;
    }
    printf("\n\tData inserted Successfully\n");
}

void traverse()
{
    if(head==NULL)
    {
        printf("\n\tThe List is empty");
    }
    else
    {
        node *ref=head;
        printf("\n\tData present in this node : ");
        while(ref!=NULL)
        {
            printf("\n\t%d",ref->data);
            ref=ref->next;
        }
    }

}

void deleteFromBeginning()  //This function delete data from beginning
{
    node *t=head;
    node *del;
    if(head==NULL)
    {
        ("\n\n\tThe List is empty");

    }
    else if(head->next==NULL)
    {
        del=head;
        head=NULL;
        printf("\n\n\tOnly block in the list deleted Successfully");
    }
    else
    {
        del=head;
        head=head->next;
        printf("\n\n\tFirst block deleted successfully");
    }
    free(del);
}

int main()
{
    insert();
    insert();
    insert();
    traverse();

    deleteFromBeginning();
    traverse();
    deleteFromBeginning();
    traverse();
    deleteFromBeginning();
    traverse();

    return 0;
}