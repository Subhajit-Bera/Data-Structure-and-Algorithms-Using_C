#include<stdio.h>
#include<stdlib.h>

typedef struct Stack
{
    int data;
    struct Stack *next;
}node;


node *stack=NULL;

node *createNode()
{
    node *temp;
    temp=(node*)malloc(sizeof(node));
    return temp;
}

void push()
{
    node *temp=createNode();
    printf("\n\tEnter the Data : ");
    scanf("%d",&temp->data);
    temp->next=NULL;
    temp->next=stack;
    stack=temp;
    printf("\t%d Pushed into Stack ",temp->data);
}

void pop()
{
    node *t=stack;
    node *del;
    if(stack==NULL)
    {
        printf("\n\tThe Stack is empty,Underflow");
    }
    else if(stack->next==NULL)
    {
        del=stack;
        stack=NULL;
        printf("\n\tPopped value : %d\n",del->data);
    }
    else
    {
        del=stack;
        stack=stack->next;
        printf("\n\tPopped value : %d\n",del->data);
    }
    free(del);
}

void stackprint()
{
    if(stack==NULL)
    {
        printf("\n\tThe Stack is empty,Underflow");
        return;
    }
    node *ref=stack;
    printf("\n\n\tData present in the Stack:");
    int count=0;
    while(ref !=NULL)
    {
        count++;
        printf("\n\t%d",ref->data);
        ref=ref->next;
    }
    printf("\t\nNumber of elements in the Stack : %d\n",count);    
}


int main()
{
    push();
    push();
    push();
    push();  
    stackprint();

    pop();
    pop();
    pop();
    pop();
    stackprint();

    return 0;
}