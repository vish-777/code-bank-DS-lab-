#include<stdio.h>
typedef struct 
{
	int arr[50],rear1,front1,rear1,rear2,size1,size2;
}queue;

void insert(queue *q,int c,int total)
{
	if(c==1)
	{
		if(q->rear1==-1 && q->front1==-1)
			q->rear1=q->front1=0;
		else if((q->front1==0 && q->rear1==q->size1-1) || q->front1==q->rear1+1)
		{
			printf("\nQueue 1 overflow");
			return;
		}
		else if(q->rear1==q->size1-1)
			q->rear1=0;
		else 
			q->rear++;
		printf("\nEnter the number: ");
		scanf("%d",q->arr[rear1]);
		q->size1++;
	}
	else
	{
		if(q->rear2==total && q->front2==total)
			q->rear2=q->front2=total-1;
		else if( (q->front2==total-1 && q->rear2==q->size1) ||  q->front2==q->rear2-1 )
		{
			printf("\nQueue 2 overflow");
			return;
		}
		else if(q->rear2==size1-1)
			q->rear2=total-1;
		else 
			q->rear2++;
		printf("\nEnter the number: ");
		scanf("%d",q->arr[rear2]);
		q->size2++;
	}
}
void delete(queue *q,int c,int total)
{
	if(c==1)
	{
		if(q->rear1==-1)
		{
			printf("\nQueue Underflow\n");
			return;
		}
		else
		{
			printf("\n%s deleted",q->arr[q->front1]);
			if(q->front1==q->rear1)
				q->front1=q->rear1=-1;
			else if(q->front1==size1-1)
				q->front1==0;
			else
				q->front1++;
		}
	}
	else
	{
		if(q->rear2==total)
		{
			printf("\nQueue Underflow\n");
			return;
		}
		else
		{
			printf("\n%s deleted",q->arr[q->front2]);
			if(q->front2==q->rear2)
				q->front2=q->rear2=total;
			else if(q->front2==size1+1)
				q->front2=total-1;
			else
				q->front2--;
		}
	}
}
void main()
{
	queue que;
	que.front1=-1;
	que.rear1=-1;
	int n1,n2;
	printf("Enter the size of the 2 queues: ")
	scanf("%d%d",&n1,&n2);
	que.front2=que.rear2=n1+n2;
	do//this is of stack.Modify it
	{
		printf("\n1.Push to 1st stack\n2.Pop from 1st stack\n3.Push to 2nd stack\n4.Pop from 2nd stack\n5.Display all elements\nAny other key to exit\nEnter your choice:");
		scanf("%d",&ch);
		if(ch==1)
		{
			if(s.index1==n1-1)
			{
				printf("\nOverflow\n");
				continue;
			}	
			printf("\nEnter the element:");
			scanf("%d",&ele);
			push(&s,1,ele);
		}
		if(ch==2)
		{
			if(s.index1==-1)
				printf("\nUnderflow\n");
			printf("\nPopped element: %d\n",pop(&s,1));
		}
		if(ch==3)
		{
			if(s.index2==n1)
			{
				printf("\nOverflow\n");
				continue;
			}	
			printf("\nEnter the element:");
			scanf("%d",&ele);
			push(&s,2,ele);
		}
		if(ch==4)
		{
			if(s.index2==n1+n2)
				printf("\nUnderflow\n");
			printf("\nPopped element: %d\n",pop(&s,2));
		}
		if(ch==5)
			disp(&s,n1+n2);
	}while(ch>0 && ch<6);
}