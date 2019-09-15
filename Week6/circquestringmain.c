#include"circularqueueofstrings.h"
void main()
{
	queue que;
	que.front=-1;
	que.rear=-1;
	int size,ch;
	printf("Enter the size of the array(MAX 15): ");
	scanf("%d",&size);
	do
	{
		printf("\n1.Insert\n2.Delete\n3.Display\nAny other key to exit\nEnter your choice:");
		scanf("%d",&ch);
		if(ch==1)
			insertcq(&que,size);
		else if(ch==2)
			deletecq(&que,size);
		else if(ch==3)
			displaycq(&que,size);
	}while(ch>0 && ch<4);
}
