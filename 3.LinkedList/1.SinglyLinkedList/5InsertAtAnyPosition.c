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
    printf("\n\tEnter the value : ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        node *ref = head;
        while (ref->next != NULL)
        {
            ref = ref->next;
        }
        ref->next = temp;
    }
    printf("\n\tData inserted Successfully");
}

void insertAtAny()  //This is the function for insertion at any position
{
    node *temp = createNode();
    printf("\n\tEnter the data (for specific position) : ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    int pos;
    printf("\n\tEnter the position : ");
    scanf("%d", &pos);
    int count = 1;
    node *t = head, *prev;
    if (pos <= 0 || pos > count && head == NULL)
    {
        printf("\n\tINVALID");
    }
    else if (pos == 1)
    {
        temp->next = head;
        head = temp;
    }
    else
    {
        while (t != NULL && count < pos)
        {
            prev = t;
            t = t->next;
            count++;
        }
        if (pos > count)
        {
            printf("\n\tInvalid");
        }
        else
        {
            printf("\n\tcount %d", count);
            printf("\n\tpos %d", pos);
            prev->next = temp;
            temp->next = t;
        }
    }
}

void traverse()
{
    node *ref = head;
    printf("\n\tData present in this List : ");
    while (ref != NULL)
    {
        printf("\n\t%d\n", ref->data);
        ref = ref->next;
    }
}

int main()
{
    insert();
    insert();
    insert();
    traverse();

    insertAtAny();
    traverse();
    insertAtAny();
    traverse();
    insertAtAny();
    traverse();

    return 0;
}