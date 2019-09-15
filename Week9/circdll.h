#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	struct node *left;
	int digit;
	struct node *right;
}*cdll;

cdll insert(cdll head,int a)
{
	cdll temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->digit=a;
	if(head->right==NULL)
	{
		temp->left=temp->right=head;
		head->left=head->right=temp;
		return head;
	}	
	temp->right=head->right;
	temp->left=head;
	head->right->left=temp;
	head->right=temp;
	return head;
}

void display(cdll head)
{
	if(head->right==NULL)
		printf("Empty list\n");
	else
		for(cdll temp=head->right;temp!=head;temp=temp->right)
			printf("%d ",temp->digit);	
}

cdll add(cdll head1,cdll head2,cdll headf)
{
	int c=0,s=0;
	cdll temp1,temp2;
	//for(temp1=head1->right;temp1->right!=head1;temp1=temp1->right);
	//for(temp2=head2->right;temp2->right!=head2;temp2=temp2->right);
	temp1=head1->left;
	temp2=head2->left;
	while(temp1!=head1 && temp2!=head2)
	{
		s=temp1->digit + temp2->digit + c;
		c=s/10;
		s%=10;
		headf=insert(headf,s);
		temp1=temp1->left;
		temp2=temp2->left;
	}
	while(temp1!=head1)
	{
		s=temp1->digit + c;
		c=s/10;
		s%=10;
		headf=insert(headf,s);
		temp1=temp1->left;
	}
	while(temp2!=head2)
	{
		s=temp2->digit + c;
		c=s/10;
		s%=10;
		headf=insert(headf,s);
		temp2=temp2->left;
	}
	if(c!=0)
		headf=insert(headf,c);
	return headf;
}