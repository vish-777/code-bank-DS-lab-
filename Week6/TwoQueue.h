#include<stdio.h>
typedef struct
{
	int arr[20];
	int front1,rear1,front2,rear2;
}queue;

void insert1(queue *q,int size)
{
	if(q->rear1==-1)
		q->front1=q->rear1=0;
	else if((q->front1==0 && q->rear1==size-1) || q->front1==q->rear1+1)
	{
		printf("\nQueue overflow\n");
		return;
	}
	else if(q->rear1==size-1)
		q->rear1=0;
	else 
		q->rear1++;
	int x;
	printf("\nEnter the number: ");
	scanf("%d",&x);
	q->arr[q->rear1]=x;
}	

void insert2(queue *q,int size1,int size2)
{ 
	if( (q->front2==size1 && q->rear2==(size1+size2)-1) || (q->rear2==q->front2-1))
		printf("\nOverflow\n");
  	else 
    { 
		int x;		
		printf("\nEnter the number: ");
		scanf("%d",&x);
		if(q->front2==-1)
	 	       q->front2=q->rear2=size1;
	        else if(q->rear2==size1+size2-1)
	  		q->rear2=size1;
         	else 
            		(q->rear2)++;
      		q->arr[q->rear2]=x;
   	}
}  


void delete1(queue *q,int size)
{
	if(q->front1==-1)
		printf("\nQueue Underflow\n");
	else
	{
		printf("\n%d deleted",q->arr[q->front1]);
		if(q->front1==q->rear1)
			q->front1=q->rear1=-1;
		else if(q->front1==size-1)
			q->front1=0;
		else
			(q->front1)++;
	}
}

void delete2(queue *q,int size1,int size2)
{ 
	if(q->front2==-1)
		printf("\nQueue Underflow\n");
  	else 
   	{
		printf("\n%d deleted",q->arr[q->front2]);
     		if(q->front2==q->rear2)
         		q->front2=q->rear2=-1;
     		else if(q->front2==size2+size1-1)
           		q->front2=size1;
        	else
         		(q->front2)++;
    	}
} 

void display(queue q,int size1,int size2)
{
	int i;
	printf("\n1st Queue\n");
    	if(q.front1==-1)
       	printf("\nQueue Empty\n");
     	else 
     	{ 
		if(q.front1<=q.rear1)
	        for(i=q.front1;i<=q.rear1;i++)
        		printf("%d\t",q.arr[i]);
       		else 
         	{
			for(i=q.front1;i<size1;i++)
                		printf("%d\t",q.arr[i]);
            		for(i=0;i<=q.rear1;i++)
                		printf("%d\t",q.arr[i]);
          	}
     	}
	printf("\n2nd Queue\n");
  	if(q.front2==-1)
        	printf("\nQueue Empty\n");
     	else
      	{
		if(q.front2<=q.rear2)
		        for(i=q.front2;i<=q.rear2;i++)
			        printf("%d\t",q.arr[i]);
        	else 
          	{
			for(i=q.front2;i<size2+size1;i++)
		                printf("%d\t",q.arr[i]);
        		for(i=size1;i<=q.rear2;i++)
                 		printf("%d\t",q.arr[i]);
           	}
      	}
}