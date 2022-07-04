//Insertion in Binary Search Tree.

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
    printf("\n\tEnter the data : ");
    scanf("%d",&n->data);
    n->left=NULL;
    n->right=NULL;

    return n;
}

node* insert(node *temp,node *h)
{
    if(h==NULL)
    {
        h=temp;
        printf("\nData Inserted\n");
    }
    else if(temp->data<h->data)
    {
        h->left=insert(temp,h->left);
    }
    else if(temp->data>h->data)
    {
        h->right=insert(temp,h->right);
    }
    return h;
    
}

void inorder(node *h)
{
    if(h !=NULL)
    {
        inorder(h->left);
        printf("%d ",h->data);
        inorder(h->right);
    }
}

void preorder(node *h)
{
    if(h !=NULL)
    {
        printf("%d ",h->data);
        preorder(h->left);
        preorder(h->right);
    }
}

void postorder(node *h)
{
    if(h!=NULL)
    {
        postorder(h->left);
        postorder(h->right);
        printf("%d ",h->data);
    }
}



int menu()
{
	int choice;
	printf("\n\t\tEnter your choice : ");
	scanf("%d",&choice);
	return(choice);
}

int main()
{
    printf("\n1 : Insert \n");
    printf("\n0 : Traverse \n");
    while(1)
    {
        switch (menu())
        {
        case 1: ;
            node *temp=createNode();
            node *h;
            h=root;
            root=insert(temp,h);
            break;
        case 0 :
            if(root==NULL)
            {
                printf("\n\t\tNo nodes present in the tree\n");
            }
            else
            {
                printf("\n\t\tInorder Traversal : ");
                inorder(root);

                printf("\n\t\tPreorder Traversal : ");
                preorder(root);

                printf("\n\t\tPostorder Traversal :");
                postorder(root);
            }
            break;
        default:
            printf("\n\t\tEnter a valid choice\n");
            break;
        }
    }
}