// Implementation of Binary search tree
#include <stdio.h>
#include <stdlib.h>

typedef struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
} node;

node *root = NULL;

node *createNode(int value)
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    temp->data = value;
    temp->left = NULL;
    temp->right = NULL;
    return (temp);
}

node *insert(node *root, int data)
{
    if (root == NULL)
    {
        return createNode(data);
    }
    else if (data < root->data)
    {
        root->left = insert(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = insert(root->right, data);
    }
    return root;
}

void Inorder(node *root)
{
    if (root != NULL)
    {
        Inorder(root->left);
        printf("%d ", root->data);
        Inorder(root->right);
    }
}
void Preorder(node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        Preorder(root->left);
        Preorder(root->right);
    }
}
void Postorder(node *root)
{
    if (root != NULL)
    {
        Postorder(root->left);
        Postorder(root->right);
        printf("%d ", root->data);
    }
}

int main()
{
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 10);
    root = insert(root, 15);
    root = insert(root, 50);

    printf("Inorder traversal : ");
    Inorder(root);
    printf("\n");
    printf("Postorder traversal : ");
    Postorder(root);
    printf("\n");
    printf("Preorder traversal : ");
    Preorder(root);
    printf("\n");
    return 0;
}