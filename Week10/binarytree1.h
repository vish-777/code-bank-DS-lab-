#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *rightchild;
	struct node *leftchild;
}*tree;

static int flag=0;

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
	int top=-1;
	tree stack[20],temp=root;
	while(1)
	{
		while(temp!=NULL)                    //if(temp!=NULL){push;temp=temp->leftchild;}
		{									 
			stack[++top]=temp;
			temp=temp->leftchild;
		}									 //else{if(top<0)break;  else{temp=s.top();s.pop();printdata;temp=temp->right;}}
		if(top>=0)
		{
			temp=stack[top--];
			printf("%d\t",temp->data);
			temp=temp->rightchild;
		}
		else
			break;
	}
}

void preorder(tree root)
{
	if(root!=NULL)
	{
		printf("%d\t",root->data);
		preorder(root->leftchild);
		preorder(root->rightchild);
	}	
}

void postorder(tree root)
{
	if(root!=NULL)
	{
		postorder(root->leftchild);
		postorder(root->rightchild);
		printf("%d\t",root->data);
	}	
}

void preordersearch(tree root,int ele)
{
	if(root!=NULL)
	{
		if(ele==root->data)
		{
			flag=1;
			return;
		}
		preordersearch(root->leftchild,ele);
		preordersearch(root->rightchild,ele);
	}
}