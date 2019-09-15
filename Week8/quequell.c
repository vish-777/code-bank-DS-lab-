#include"queuell.h"
void main()
{
	rear=NULL;
	header=(queue*)malloc(sizeof(queue));
	int ch,n;
	do
	{
		printf("\n\n1.Insert\n2.Delete\n3.Display\nAny other key to exit\nEnter your choice:");
		scanf("%d",&ch);
		if(ch==1)
		{
			printf("\nEnter the element:");
			scanf("%d",&n);
			insert(n);
		}
		else if(ch==2)
			delete();
		else if(ch==3)
			display();
	}while(ch>0 && ch<4);
}
