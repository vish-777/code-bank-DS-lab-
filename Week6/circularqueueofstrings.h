#include<stdio.h>
#include<string.h>

typedef struct
{
	char arr[15][30];
	int front,rear;
}queue;	

void insertcq(queue *q,int size)
{
	if(q->rear==-1)
		q->front=q->rear=0;
	else if((q->front==0 && q->rear==size-1) || q->front==q->rear+1)
	{
		printf("\nQueue overflow\n");
		return;
	}
	else if(q->rear==size-1)
		q->rear=0;
	else 
		q->rear++;
	char s[30];
	printf("\nEnter the string: ");
	scanf("%s",s);
	strcpy(q->arr[q->rear],s);
}
void deletecq(queue *q,int size)
{
	if(q->front==-1)
		printf("\nQueue Underflow\n");
	else
	{
		printf("\n%s deleted",q->arr[q->front]);
		if(q->front==q->rear)
			q->front=q->rear=-1;
		else if(q->front==size-1)
			q->front==0;
		else
			q->front++;
	}
}
void displaycq(queue *q,int size)
{
	int i;
	if(q->front==-1)
        	printf("\nEmpty queue\n");   
	else 
	{
		if(q->front<=q->rear)
		           for(i=q->front;i<=q->rear;i++)
        			     printf("%s\t",q->arr[i]);
         	else 
         	{
			for(i=q->front;i<size;i++)
				printf("%s\t",q->arr[i]);
			for(i=0;i<=q->rear;i++)
				printf("%s\t",q->arr[i]);
		}	
	}
	printf("\n");
}
