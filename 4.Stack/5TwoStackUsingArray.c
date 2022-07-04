#include<stdio.h>
#include<stdbool.h>
#define MAX 10
int stack[MAX];
int topFirst=-1;
int topSecond=MAX;
int mid= MAX/2;

bool notOverFlowFirst()
{
    if(topFirst+1<mid)
    {
        return true;
    }
    return false;
}


bool notOverFlowSecond()
{
    if(topSecond-1>mid)
    {
        return true;
    }
    return false;
}

bool notUnderFlowFirst()
{
    if(topFirst+1>0)
    {
        return true;
    }
    return false;
}

bool notUnderFlowSecond()
{
    if(topSecond < MAX)
    {
        return true;
    }
    return false;
}

void printTwoStack()
{
    printf("\n\n\t---Printing Two Stacks--\n");

    // Printing First Stack
    if(notUnderFlowFirst())
    {
        printf("\n\tElements present in 1st stack : ");
        for(int i=0;i<=topFirst;i++)
        {
            printf("\n\t%d", stack[i]);
        }
    }
    else
    {
        printf("\n\t1st STACK : UNDERFLOW");
    }

    // Printing Second Stack

    if(notUnderFlowSecond())
    {
        printf("\n\tElements present in 2nd Stack : ");
        for(int i=MAX-1;i>=topSecond;i--)
        {
            printf("\n\t%d",stack[i]);
        }
    }
    else
    {
        printf("\n\t2nd Stack : UNDERFLOW");
    }
}

void pushFirstStack(int value)
{
    if(notOverFlowFirst())
    {
        stack[++topFirst]=value;
        printf("\n\t%d Pushed into 1st Stack",value);
    }
    else
    {
        printf("\n\t1st Stack : OVERFLOW");
    }
}

void pushSecondStack(int value)
{
    if(notOverFlowSecond())
    {
        stack[--topSecond]=value;
        printf("\n\t%d Pushed into 2nd Stack",value);
    }
}

void popFirstStack()
{
    if(notUnderFlowFirst())
    {
        printf("\n\t%d Popped from 1st Stack",stack[topFirst--]);
    }
    else
    {
        printf("\n\t1st Stack : UNDERFLOW");
    }
}

void popSecondStack()
{
    if(notUnderFlowSecond())
    {
        printf("\n\t%d Popped from 2nd Stack",stack[topSecond++]);
    }
    else
    {
        printf("\n\t2nd Stack : UNDERFLOW");
    }
}

int main()
{
    pushFirstStack(1);
    pushFirstStack(2);
    pushFirstStack(3);
    pushFirstStack(4);
    pushFirstStack(5);
    pushFirstStack(6);


    pushSecondStack(10);
    pushSecondStack(9);
    pushSecondStack(8);
    pushSecondStack(7);
    pushSecondStack(6);

    printTwoStack();

    popFirstStack();
    popFirstStack();
    popSecondStack();
    popSecondStack();
    printTwoStack();

    popFirstStack();
    popFirstStack();
    popFirstStack();
    popFirstStack();

    popSecondStack();
    popSecondStack();
    popSecondStack();
    popSecondStack();

    printTwoStack();
    

    return 0;

}