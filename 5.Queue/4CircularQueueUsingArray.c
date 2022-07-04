// CIRCULAR QUEUE USING ARRAY. TIME COMPLEXITY : 0(1)


#include<stdio.h>
#include<stdbool.h>
# define size 5
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
    if(((rear+1) % size)==front)
    {
        return true;
    }
    return false;
}

void enQueue(int value)
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
        rear=(rear+1)%size;
        queue[rear]=value;
    }
}



void deQueue()
{
    if(isEmpty())
    {
        printf("Queue is empty");
    }
    else if(front == rear)
    {
        printf("Dequed value : %d",queue[front]);
        front=rear=-1;
    }
    else
    {
        printf("\nDequed value : %d",queue[front]);
        front=(front+1) % size;
    }
}



void printQueue()
{
    int i=front;
    if(isEmpty())
    {
        printf("Queue is empty");
    }
    else
    {
        printf("\nQueue : \n");
        while(i != rear)
        {
            printf("%d ",queue[i]);
            i=(i+1) % size;
        }
        printf("%d ",queue[rear]);
    }
    printf(" \n");
}

void peek()
{
    printf("%d",queue[front]);
}





int main()
{
    enQueue(10);
    enQueue(20);
    enQueue(30);
    enQueue(40);
    enQueue(50);
    printQueue();
    enQueue(60);

    deQueue();
    deQueue();
    deQueue();
    printQueue();
    enQueue(100);
    enQueue(200);
    printQueue();
    peek();

   

    return 0;
}
