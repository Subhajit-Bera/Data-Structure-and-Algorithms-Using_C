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

void insertAtBeginning()
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
    }
    printf("\n\tData inserted Successfully\n");

}

void traverse()
{
    if(last==NULL)
    {
        printf("\n\tThe List is empty");
        return;
    }
    node *ref=last->next;
    printf("\n\tNodes present in the List : ");
    do
    {
        printf("\n\t%d\n",ref->data);
        ref=ref->next;
    } while (ref != last->next);  
    
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
