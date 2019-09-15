#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *link;
}queue;
queue *header,*rear;
void insert(int a)
{
	queue *temp;
	temp=(queue*)malloc(sizeof(queue));
	temp->link=NULL;
	temp->data=a;
	if(rear==NULL)
	{
		rear=temp;
		header->link=rear;
	}	
	else
	{
		rear->link=temp;
		rear=temp;
	}
}

void delete()
{
	queue *temp;
	temp=header->link;
	if(header->link==NULL)
	{
		printf("Empty queue");
		return;
	}
	printf("%d deleted",temp->data);
	header->link=temp->link;
	if(rear==temp)
		rear=NULL;
	free(temp);
}

void display()
{
	if(header->link==NULL)
	{
		printf("Empty queue");
		return;
	}
	printf("Queue elements are:\n");
	queue *temp;
	for(temp=header->link; temp; temp=temp->link)
		printf("%d\t",temp->data);
}