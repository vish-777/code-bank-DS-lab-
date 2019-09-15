#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node
{
	char data[30];
	struct node *left;
	struct node *right;
}*dll;

dll insert(dll head,char a[30])
{
	dll temp;
	temp=(struct node*)malloc(sizeof(struct node));
	strcpy(temp->data,a);
	temp->left=temp->right=NULL;
	if(head==NULL)
		return temp;
	dll temp1=head;
	while(temp1->right!=NULL)
		temp1=temp1->right;
	temp1->right=temp;
	temp->left=temp1;
	return head;
}

void display(dll head)
{
	if(!head)
		printf("Empty list\n");
	else
		for(dll temp=head;temp!=NULL;temp=temp->right)
			printf("%s  ",temp->data);
}

dll reverse(dll head)
{
	dll current,next,prev;
	current=head;
	prev=NULL;
	while(current)
	{
		next=current->right;
		current->right=prev;
		prev=current;
		current->left=next;
		current=next;
	}
	head=prev;
	return head;
}