// Search an element in Binary Serch Tree.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct Tree
{
    int data;
    struct Tree *left;
    struct Tree *right;
} node;

node *root = NULL;
node *createNode()
{
    node *n;
    n = (node *)malloc(sizeof(node));
    printf("\n\t\tEnter a value:- ");
    scanf("%d", &n->data);
    n->left = NULL;
    n->right = NULL;
    return (n);
}

node *insert(node *temp, node *h)
{
    if (h == NULL)
    {
        h = temp;
        printf("\n\t\tElement inserted : %d\n", h->data);
    }
    else if (temp->data == h->data)
    {
        return h;
    }
    else if (temp->data > h->data)
    {
        h->right = insert(temp, h->right);
    }
    else if (temp->data < h->data)
    {
        h->left = insert(temp, h->left);
    }
    return h;
}

bool search(node *h, int data)
{
    if (h == NULL)
    {
        return false;
    }
    else if (data > h->data)
    {
        return search(h->right, data);
    }
    else if (data < h->data)
    {
        return search(h->left, data);
    }
    return true;
}

void inorder(node *h)
{
    if (h != NULL)
    {
        inorder(h->left);
        printf("%d   ", h->data);
        inorder(h->right);
    }
}

void preorder(node *h)
{
    if (h != NULL)
    {

        printf("%d   ", h->data);
        preorder(h->left);
        preorder(h->right);
    }
}
void postorder(node *h)
{
    if (h != NULL)
    {
        postorder(h->left);
        postorder(h->right);
        printf("%d   ", h->data);
    }
}

int menu()
{
    int choice;
    printf("\n\t\tENTER YOUR CHOICE:- ");
    scanf("%d", &choice);
    return (choice);
}

int main()
{
    printf("\n1.Insert : \n");
    printf("\n2.Search : \n");
    printf("\n0.Traverse : \n");
    while (1)
    {
        switch (menu())
        {
        case 1:;
            node *temp;
            temp = createNode();
            node *h;
            h = root;
            root = insert(temp, h);
            break;

        case 2: ;
            int item;
            printf("\n\tEnter the item you want to search :");
            scanf("%d", &item);
            if (search(root, item))
            {
                printf("\n\tItem Found");
            }
            else
            {
                printf("\n\tItem not Found");
            }
            break;
        case 0: 
            if (root == NULL)
            {
                printf("\n\tTree is empty");
            }
            else
            {
                printf("Inorder traversal : ");
                inorder(root);
                printf("\n");
                printf("Postorder traversal : ");
                postorder(root);
                printf("\n");
                printf("Preorder traversal : ");
                preorder(root);
                printf("\n");
            }
            break;
        default:
            printf("\nPlease put a valid choice\n");
            break;
        }
    }
}