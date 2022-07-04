#include<stdio.h>
#include<stdbool.h>
#define size 5
int queue[size];
int front=-1;
int rear=-1;

bool isEmpty()
{
    if(front==-1 && rear==-1)
    {
        return true;
    }
    return false;
}

bool isFull()
{
    if(rear==size-1)
    {
        return true;
    }
    return false;
}

void printQueue()
{
    if(!isEmpty())
    {
        for(int i=front;i<=rear;i++)
        {
            printf("%d ",queue[i]);
        }
    }
    else
    {
        printf("Queue is Empty\n");
    }
    printf(" \n");
}

void Enqueue(int value)
{
    if(isFull())
    {
        printf("Queue is Full\n");
    }
    else if(isEmpty())
    {
        front=rear=0;
        queue[rear]=value;
    }
    else
    {
        queue[++rear]=value;
    }
}

void Dequeue()
{
    if(isEmpty())
    {
        printf("Queue is Empty");
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        front++;
    }
}

int main()
{
    Enqueue(10);
    printQueue();
    Enqueue(20);
    printQueue();
    Enqueue(30);
    printQueue();
    Enqueue(40);
    printQueue();
    Enqueue(50);
    printQueue();
    Enqueue(60);

    Dequeue();
    printQueue();
    Dequeue();
    printQueue();
    Dequeue();
    printQueue();
    Dequeue();
    printQueue();
    Dequeue();
    printQueue(); 

    return 0;
}