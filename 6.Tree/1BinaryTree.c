#include<stdio.h>
#include<stdlib.h>

typedef struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
}node;

node *root=NULL;

node *createNode()
{
    node *n;
    n=(node*)malloc(sizeof(node));
    printf("Enter the data : ");
    scanf("%d",&n->data);
    n->left=NULL;
    n->right=NULL;
    return (n);
}


//Tree Traversals:

void Preorder(node *h)
{
    if(h !=NULL)
    {
        printf("%d ",h->data);
        Preorder(h->left);
        Preorder(h->right);
        
    }
}

void Inorder(node *h)
{
    if(h !=NULL)
    {
        Inorder(h->left);
        printf("%d ",h->data);
        Inorder(h->right);
    }
}

void Postorder(node *h)
{
    if(h !=NULL)
    {
        Postorder(h->left);
        Postorder(h->right);
        printf("%d ",h->data);
    }
}

int main()
{
    node *temp=createNode();
    node *templeft=createNode();
    node *tempright=createNode();
    node *templeftleft=createNode();
    node *templeftright=createNode();
    node *temprightleft=createNode();
    node *temprightright=createNode();

    temp->left=templeft;
    temp->right=tempright;
    templeft->left=templeftleft;
    templeft->right=templeftright;
    tempright->left=temprightleft;
    tempright->right=temprightright;


    root=temp;
    printf("\n");
    Preorder(root);
    printf("\n");
    Inorder(root);
    printf("\n");
    Postorder(root);

}
