#include<stdio.h>
#include<stdlib.h>

typedef struct node 
{
    int data;
    struct node *next;
}node;

node *last=NULL;

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
    if(last==NULL)
    {
        last=temp;
        last->next=last;
    }
    else
    {
        temp->next=last->next;
        last->next=temp;
        last=last->next;
        
    }
    printf("\n\tData inserted successfully :)\n");
}

void deleteFromBeginning() //This function delete the node from the beginning
{
    if(last==NULL)
    {
        printf("\n\tList is empty");
        return;
    }
    node *del;
    if(last->next==last)
    {
        del=last;
        last=NULL;
    }
    else
    {
        del=last->next;
        last->next=last->next->next;
    }
    printf("\n\tDeleting : %d",del->data);
    free(del);   
}

void traverse()
{
    if(last==NULL)
    {
        printf("\n\tThe List is empty");
    }
    else
    {
        node *ref=last->next;
        printf("\n\tNodes present in the List : ");
        do
        {
            printf("\n\t%d\n",ref->data);
            ref=ref->next;
        } while (ref!=last->next);
        
    }
    
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