#include<stdio.h>
#define MAX 5
typedef struct
{
	int arr[MAX];
	int rear,front;
}queue;

int smallest(queue *q,int arr[MAX])
{
	int i,pos=0;	
	for(i=q->front;i<=q->rear;i++)
		if(arr[i]<arr[pos])
			pos=i;
	return pos;
}

void pqinsert(queue *q,int x)
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
	q->arr[q->rear]=x;
}

void pqmindelete(queue *q)
{
	int p;
	if(q->rear==-1)
	{
		printf("\nQueue empty\n");
		return;
	}
	p=smallest(q,q->arr);
	printf("%d deleted",q->arr[p]);
	for(int i=p;i<(q->rear);i++)
		q->arr[i]=q->arr[i+1];
	q->rear--;
}

void display(queue q)
{
	if(q.rear==-1)
   	{
   		printf("\nQueue empty\n");
     	return;
   	}
   	printf("\n");
  	for(int i=0;i<=q.rear;i++)
    	printf("%d\t",q.arr[i]);
}