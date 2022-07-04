#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

node *head = NULL;

node *createNode()
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    return temp;
}

void insert()  //This function simply insert the data at the end
{
    node *temp = createNode();
    printf("Enter the data : ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    if (head == NULL)
        head = temp;
    else
    {
        node *ref = head;
        while (ref->next != NULL)
            ref = ref->next;
        ref->next = temp;
    }
    printf("Successfully inserted Data :) \n");
}

void countLn()   //This function gives count of elements present inside LinkedList 
{ 
    node *ref = head;
    int count = 0;
    while (ref != NULL)
    {
        count++;
        ref = ref->next;
    }
    printf("\n\tSize of the list is : %d\n", count);
}

void traverse()
{
    node *ref=head;
    printf("\n\tNode present in this List : ");
    while(ref != NULL)
    {
        printf("\n\t%d\n",ref->data);
        ref=ref->next;
    }
}

int main()
{
    insert();
    insert();
    insert();
    insert();

    traverse();
    countLn();

    return 0;
}