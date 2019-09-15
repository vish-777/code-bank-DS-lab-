#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *rightchild;
	struct node *leftchild;
}*tree;

tree create(int a)
{
	tree temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=a;
	temp->leftchild=temp->rightchild=NULL;
	return temp;
}

tree insert(tree root,tree temp)
{
	if(root==NULL)
		return temp;
	int ch;
	printf("1.Left or 2.Right of %d\nEnter your choice:",root->data);
	scanf("%d",&ch);
	if(ch==1)
		root->leftchild=insert(root->leftchild,temp);
	else
		root->rightchild=insert(root->rightchild,temp);
	return root;
}

void inorder(tree root)
{
	if(root!=NULL)
	{
		inorder(root->leftchild);
		printf("%d\t",root->data);
		inorder(root->rightchild);
	}
}

void preorder(tree root)
{
	int top=-1;
	tree stack[20],temp=root;
	stack[++top]=temp;
	while(top>=0)
	{
		temp=stack[top];
		printf("%d\t",temp->data);
		stack[top--];
		if(temp->rightchild!=NULL)
			stack[++top]=temp->rightchild;
		if(temp->leftchild!=NULL)
			stack[++top]=temp->leftchild;
	}
}

void postorder(tree root)
{
	int top=-1,topo=-1;
	tree stack[20],stacko[20],temp=root;
	stack[++top]=temp;
	while(top>=0)
	{
		temp=stack[top];
		stacko[++topo]=temp;
		stack[top--];
		if(temp->leftchild!=NULL)
			stack[++top]=temp->leftchild;
		if(temp->rightchild!=NULL)
			stack[++top]=temp->rightchild;
	}	
	while(topo>=0)
	{
		temp=stacko[topo];
		printf("%d\t",temp->data);
		topo--;
	}	
}