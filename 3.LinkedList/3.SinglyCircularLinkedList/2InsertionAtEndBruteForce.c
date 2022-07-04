//INSERT n NUMBERS OF NODE AT THE END OF SINGLY CIRCULAR LINKEDLIST.



// TIME COMPLEXITY OF THE CODE GIVEN BELOW IS O(n)[BECAUSE HERE WE TRAVESED THE WHOLE LIST]

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

void insert()
{
    node *temp=createNode();
    printf("\n\tEnter the data : ");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
        head->next=head;
    }
    else
    {
        node *t=head;
        while(t->next !=head)
        {
            t=t->next;
        }
        t->next=temp;
        temp->next=head;
    }
    printf("\n\tData inserted Successsfully\n");
}

void traverse()
{
    if(head==NULL)
    {
        printf("\n\tThe List is empty");
        return;
    }
    node *ref=head;
    printf("\n\tNodes present in the List : ");
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

    traverse();


    return 0;
}