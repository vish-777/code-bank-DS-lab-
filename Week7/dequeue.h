#include<stdio.h>
#include<string.h>
#define MAX 4
typedef struct
{
	char arr[MAX][100];
	int front,rear;
}queue;

void copy(char *a,char*b)
{
	int i;
	for(i=0;b[i]!='\0';i++)
		a[i]=b[i];
	a[i]='\0';
}

void insertright(queue *q)
{
	if(q->rear==MAX-1)
	{
		printf("\nQueue full\n");
		return;
	}
	else if(q->front==-1)
		q->front=q->rear=0;
	else
		q->rear++;
	char x[100];
	printf("Enter the string: ");
	scanf("%s",x);
	copy(q->arr[q->rear],x);
}

void insertleft(queue *q)
{
	if(q->front==0)
	{
		printf("\nQueue full\n");
		return;
	}
	if(q->front==-1)
		q->front=q->rear=0;
	else
		q->front--;
	char x[100];
	printf("\nEnter the string: ");
	scanf("%s",x);	
	copy(q->arr[q->front],x);
}	

void deleteleft(queue *q)
{
	if(q->rear==-1)
	{
		printf("\nQueue empty\n");
		return;
	}
	printf("\n%s  deleted\n",q->arr[q->front++]);
	if(q->rear==q->front-1)
		q->front=q->rear=-1;
}

void display(queue *q)
{
	if(q->rear==-1)
	{
		printf("\nQueue empty\n");
		return;
	}
	for(int i=q->front;i<=q->rear;i++)
		printf("%s        ",q->arr[i]);
}