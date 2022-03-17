#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *left,*right;
};
typedef struct Node Nd;
Nd* createnode(int ele)
{
	Nd *temp=(Nd*)malloc(sizeof(Nd));
	temp->data=ele;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}

Nd* insert(Nd *root,int ele)
{
	Nd *temp;
	if(root==NULL)
	{
		temp= createnode(ele);	
		return temp;	
	}
	if(ele>root->data) //6>11
		root->right=insert(root->right,ele);
	else
		root->left=insert(root->left,ele);
	return root;
}


void inorder(Nd* root)
{
	if(root!=NULL)
	{
		inorder(root->left);
	    printf("%d\t",root->data);
	    inorder(root->right);
	}
}
void preorder(Nd* root)
{
	if(root!=NULL)
	{
		printf("%d\t",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(Nd* root)
{
	if(root!=NULL)
	{
		
		postorder(root->left);
		postorder(root->right);
    	printf("%d\t",root->data);
    }
}
void main()
{
	Nd *root=NULL;
	root = insert(root,11);
	root = insert(root,6);
	root = insert(root,14);
	root = insert(root,28);
	root = insert(root,32);
	root = insert(root,45);
	
	printf("\nINORDER\n");
	inorder(root);
	printf("\nPREORDER\n");
	preorder(root);
	printf("\nPOSTORDER\n");
	postorder(root);
}