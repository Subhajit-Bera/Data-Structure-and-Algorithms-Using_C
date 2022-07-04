#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;          //In this data portion data of the node will be store
    struct node *next; //here *next point to the next address
} node;                //Here node is the alternative or nick name for the stucture

node *createNode()
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    return temp;
}

int main()
{
    node *head;
    node *temp = createNode();
    temp->data = 100;
    temp->next = NULL;
    if (head == NULL)
        head = temp;

    printf("Data : %d\n", temp->data);

    return 0;
}