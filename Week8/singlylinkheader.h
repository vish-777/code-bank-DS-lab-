#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	char data;
	struct node *link;
}*sll;

sll insert(sll head,char n)
{
	sll temp,temp1;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=n;
	temp->link=NULL;
	if(head->link==NULL)
	{
		head->link=temp;
		return head;
	}
	for(temp1=head;temp1->link!=NULL;temp1=temp1->link);
	temp1->link=temp;
	return head;
}

void display(sll head)
{
	if(head==NULL)
	{
		printf("Empty list\n");
		return;
	}
	for(sll temp=head->link;temp;temp=temp->link)
		printf("%c\t",temp->data);
}