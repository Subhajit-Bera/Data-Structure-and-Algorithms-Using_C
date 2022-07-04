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
    printf("\n\tEnter the value:");
    scanf("%d",&temp->data);
    temp->next=NULL;
    temp->prev=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        node *t=head;
        while(t->next !=NULL)
        {
            t=t->next;
        }
        temp->prev=t;
        t->next=temp;
    }

}

void traverse()           //TRAVERSING THE LIST FOR PRINTING THE VALUES
{
    if(head==NULL)
    {
        printf("\n\tNo data present in the List");
        return ;
    }
    node *ref=head;
    while(ref!=NULL)
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

    return 0;
}