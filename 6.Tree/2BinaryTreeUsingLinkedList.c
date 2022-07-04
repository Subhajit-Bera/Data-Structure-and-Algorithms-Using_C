// BINARY TREE IMPLEMENTATION USING LINKEDLIST


#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *left;
	struct node *right;
}node;

node *createNode()
{
	int x;
	node *temp;
	temp=(node*)malloc(sizeof(node));
	printf("\nEnter the Data : ");
	scanf("%d",&x);
	if(x==-1)  //whenever user puts -1 contol will return to parent node
	{
		return NULL;
	}
	temp->data=x;
	printf("Enter the left child of %d : ",x);
	temp->left=createNode();
	printf("Enter the right child of %d : ",x);
	temp->right=createNode();
	return (temp);
}


void Inorder(node *root)
{
	
	if(root==NULL)
	{
		return;
	}
	else
	{
		
		Inorder(root->left);
		printf("%d ",root->data);
		Inorder(root->right);
	}
	
}

void Preorder(node *root)
{
	
	if(root==NULL)
	{
		return;
	}
	else
	{
		
		printf("%d ",root->data);
		Preorder(root->left);
		Preorder(root->right);
	}
	
}

void Postorder(node *root)
{
	
	if(root==NULL)
	{
		return;
	}
	else
	{
		
		Postorder(root->left);
		Postorder(root->right);
		printf("%d ",root->data);
	}
	
}

int main()
{
	node *root=NULL;
	root=createNode();
	
	printf("\n");
	printf("Inorder representation of the tree is : ");
	Inorder(root);
	printf("\n");
	printf("Preorder representation of the tree is : ");
	Preorder(root);
	printf("\n");
	printf("Postorder representation of the tree is : ");
	Postorder(root);
	
	
	
	return 0;
}