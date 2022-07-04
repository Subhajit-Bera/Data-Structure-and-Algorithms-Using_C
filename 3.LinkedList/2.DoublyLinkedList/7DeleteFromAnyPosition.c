// DELETE A NODE FROM A SPECIFIC POSITION OF A DOUBLY LINKEDLIST


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
    printf("\n\tEnter the value :");
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
}

void deleteAtAny()  //This function delete node from any position
{
    if(head==NULL)
    {
        printf("\n\tThe List is empty");
    }
    int pos;
    printf("\n\tEnter the position : ");
    scanf("%d",&pos);
    int count=1;

    node *t=head;
    node *temp;

    if(pos<=0 || pos>count && head==NULL)
    {
        printf("\n\tInvalid");
    } 
    else if(head->next == NULL && pos==1)
    {
        temp=head;
        head=NULL;
        free(temp);
        printf("\n\tData has been deleted successfully");
    }
    else if(pos==1 && head !=NULL)
    {
        temp=head;
        head=head->next;
        head->prev=NULL;
        free(temp);
        printf("\n\tData has been deleted successfully");
    }
    else
    {
        while(t->next !=NULL && count<pos)
        {
            t=t->next;
            count++;
        }
        if(pos>count)
        {
            printf("\n\tInvalid");
        }
        else
        {
            t->prev->next=t->next;
            if(t->next !=NULL)
            {
                t->next->prev=t->prev;
            }
            temp=t;
            free(temp);
            printf("\n\tData has been deleted Successfully");
        }
    }
    
}
void traverse()
{
    if(head==NULL)
    {
        ("\n\tThe list is empty");
        return;
    }
    node *ref=head;
    printf("\n\tNodes present in the List:");
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

    deleteAtAny();
    traverse();
    deleteAtAny();
    traverse();
    deleteAtAny();
    traverse();
}