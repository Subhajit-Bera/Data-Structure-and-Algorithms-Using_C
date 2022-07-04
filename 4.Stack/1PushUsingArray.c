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
    if(top !=MIN)
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
            printf("%d  ",stack[i]);
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

int main()
{
    Push(10);
    stackprint();
    Push(20);
    stackprint();
    Push(30);
    stackprint();
    Push(40);
    stackprint();
    Push(50);
    stackprint();
    Push(60);
    stackprint();
    Push(70);
    stackprint();

    return 0;

}
