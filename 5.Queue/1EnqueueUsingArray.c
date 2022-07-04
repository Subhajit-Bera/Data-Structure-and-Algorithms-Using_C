#include <stdio.h>
#include <stdbool.h>
#define size 5
int queue[size];
int front = -1;
int rear = -1;

bool isEmpty()
{
    if (front == -1 && rear == -1)
    {
        return true;
    }
    return false;
}

bool isFull()
{
    if (rear == size - 1)
    {
        return true;
    }
    return false;
}

void printQueue()
{
    if (!isEmpty())
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d  ", queue[i]);
        }
    }
    else
    {
        printf("The Queue is empty");
    }
    printf(" \n");
    return;
}

void enqueue(int value)
{
    if (isFull())
    {
        printf("Queue is Full\n");
    }
    else if (isEmpty())
    {
        front = rear = 0;
        queue[rear] = value;
    }
    else
    {
        queue[++rear] = value;
    }
}

int main()
{
    enqueue(1);
    printQueue();
    enqueue(2);
    printQueue();
    enqueue(3);
    printQueue();
    enqueue(4);
    printQueue();
    enqueue(5);
    printQueue();

    enqueue(6);

    return 0;
}
