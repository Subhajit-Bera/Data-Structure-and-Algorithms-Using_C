//INSERT A NODE AT A SPECIFIC POSITION OF A DOUBLY LINKEDLIST


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
    printf("\nEnter the value :");
    scanf("%d",&temp->data);
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
    printf("Enterd Successfully\n");
}


void insertAtAny() //This function  insert the node at any position 
{
    node *temp=createNode();
    int count=1,pos;
    printf("\n\tEnter the value :");
    scanf("%d",&temp->data);
    temp->prev=NULL;
    temp->next=NULL;
    printf("\n\tEnter the position :");
    scanf("%d",&pos);
    if(pos<=0 || pos>count && head==NULL)
    {
        printf("\n\tINVALID");
    }
    else if(pos==1 && head==NULL)
    {
        head=temp;
    }
    else if(pos==1)
    {
        head->prev=temp;
        temp->next=head;
        head=temp;
    }
    else
    {
        node *t=head;
        while(t->next !=NULL && count<pos)
        {
            t=t->next;
            count++;
        }
        if(pos>count)
        {
            printf("\n\tINVALIDvvvvvvvvv\n");
        }
        else
        {
            temp->prev=t->prev;
            temp->next=t;
            t->prev->next=temp;
            t->prev=temp;
        }

    }
    

}

void traverse()
{
    if(head==NULL)
    {
        printf("The List is empty");
        return;
    }
    node *ref=head;
    printf("Data present in this list :\n");
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
    insert();
    traverse();

    insertAtAny();
    traverse();
    return 0;
}