#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *leftc;
	struct node *rightc;
}*tree;

tree create(int n)
{
	tree temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=n;
	temp->leftc=temp->rightc=NULL;
	return temp;
}

tree insert(tree root,tree temp)
{
	if(root==NULL)
		return temp;
	else if(temp->data<root->data)
		root->leftc=insert(root->leftc,temp);
	else
		root->rightc=insert(root->rightc,temp);
	return root;
}
static int front=-1,rear=-1;
static tree queue[20];
void insertq(tree temp)
{
	if(front<0)
	{
		front=rear=0;
		queue[front]=temp;
	}
	else
		queue[++rear]=temp;
}

tree deleteq()
{
	if(front<0)
		return NULL;
	tree temp=queue[front];
	if(front==rear)
		front=rear=-1;
	else
		front++;
	return temp;
}

void displevel(tree root)
{
	tree temp=root;
	if(temp==NULL)
		return;
	insertq(temp);
	while(1)
	{
		temp=deleteq();
		if(temp!=NULL)
		{
			printf("%d\t",temp->data);
			if(temp->leftc!=NULL)
				insertq(temp->leftc);
			if(temp->rightc!=NULL)
				insertq(temp->rightc);
		}
		else 
			break;
	}
}