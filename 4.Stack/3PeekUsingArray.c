#include<stdio.h>
#include<stdbool.h>
#define MAX 5
#define MIN -1

int stack[MAX];
int top=-1;

bool notOverFlow()
{
    if(top+1<MAX)
    {
        return true;
    }
    return false;   
}


bool notUnderFlow()
{
    if(top!=MIN)
    {
        return true;
    }
    return false;
}

void stackprint()
{
    if(notUnderFlow())
    {
        for(int i=0;i<=top;i++)
        {
            printf("%d ",stack[i]);
        }
    }
    else
    {
        printf("\nSTACK UNDERFLOW\n");
    }
}

void push(int value)
{
    if(notOverFlow())
    {
        stack[++top]=value;
    }
    else
    {
        printf("\nSTACK OVERFLOW\n");
    }
}

void pop()
{
    if(notUnderFlow())
    {
        printf("\nPopped value : %d\n",stack[top--]);
    }
    else
    {
        printf("\nSTACK UNDERFLOW\n");
    }
}

void peek()
{
    if(notUnderFlow())
    {
        printf("\nPeek value : %d\n",stack[top]);
    }
    else
    {
        printf("\nSTACK UNDERFLOW\n");
    }
}

int main()
{
    push(101);
    peek();
    push(102);
    peek();
    push(103);
    peek();
    push(104);
    peek();
    push(105);
    peek();
    push(106);
    peek();
    push(107);
    peek();

    pop();
    peek();
    pop();
    pop();
    peek();
    pop();
    peek();
    pop();
    peek();
    pop();
    peek();

    return 0;
    
}