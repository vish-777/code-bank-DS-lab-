#include"dequeue.h"
void main()
{
	queue q;
	q.front=q.rear=-1;
	int ch;
	do
	{
		printf("\n\n1.Insert left\n2.Insert right\n3.Delete\n4.Display\nAny other key to exit\nEnter your choice:");
		scanf("%d",&ch);
		if(ch==1)
			insertleft(&q);
		else if(ch==2)
			insertright(&q);
		else if(ch==3)
			deleteleft(&q);
		else if(ch==4)
			display(&q);
	}while(ch>0 && ch<5);
}