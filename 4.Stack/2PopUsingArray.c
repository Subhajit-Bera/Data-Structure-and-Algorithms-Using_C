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
    printf(" \n\n");
    return ;
}

void Push(int value)
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
void Pop()
{
    if(notUnderFlow())
    {
        printf("\nPopped value : %d\n\n",stack[top--]);
    }
    else
    {
        printf("\nSTACK UNDERFLOW\n");
    }
}

int main()
{
    Push(100);
    stackprint();
    Push(200);
    stackprint();
    Push(300);
    stackprint();
    Push(400);
    stackprint();
    Push(500);
    stackprint();
    Push(600);
    stackprint();

    Pop();
    stackprint();
    Pop();
    stackprint();
    Pop();
    stackprint();
    Pop();
    stackprint();
    Pop();
    stackprint();
    Pop();
    
    return 0;  

}