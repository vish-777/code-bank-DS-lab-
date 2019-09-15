#include"asprq.h"
void main()
{
	queue q;
	q.front=q.rear=-1;
	int n,ch;
	do
	{
		printf("\n\n1.Insert\n2.Delete\n3.Display\nAny other key to exit\nEnter your choice:");
      	scanf("%d",&ch);
      	if(ch==1)
      	{
      		printf("\nEnter the element:");
       	    scanf("%d",&n);
          	pqinsert(&q,n);
        }	
        if(ch==2)
        	pqmindelete(&q); 
        if(ch==3)
        	display(q);
    }while(ch>0 && ch<4);
}