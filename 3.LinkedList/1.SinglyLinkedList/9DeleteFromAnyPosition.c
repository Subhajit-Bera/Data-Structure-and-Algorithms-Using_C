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
    printf("\n\tEnter the Data : ");
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
    printf("\n\tData inserted successfully :)\n");
}

void traverse()
{
    if (head == NULL)
    {
        printf("\n\tNo Data present in the List\n");
    }
    else
    {
        node *ref = head;
        printf("\n\tBlock present in this List : ");
        while (ref != NULL)
        {
            printf("\n\t%d", ref->data);
            ref = ref->next;
        }
    }
}

void deleteFromAny()    //This function delete data from any position 
{
    int pos;
    printf("\n\n\tEnter the position : ");
    scanf("%d", &pos);
    int count = 1;
    node *t = head, *prev, *temp;
    if (pos <= 0 || pos > count && head == NULL)
    {
        printf("\n\tInvalid");
    }
    else if (pos == 1 && head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
        printf("\n\tNode deleted Successfully");
    }
    else
    {
        while (t->next != NULL && count < pos)
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
            prev->next = t->next;
            temp = t;
            free(temp);
        }
        printf("\n\tNode deleted Successfully");
    }
}

int main()
{
    insert();
    insert();
    insert();
    insert();
    traverse();

    deleteFromAny();
    traverse();
    deleteFromAny();
    traverse();
    deleteFromAny();
    traverse();
    deleteFromAny();
    traverse();

    return 0;
}