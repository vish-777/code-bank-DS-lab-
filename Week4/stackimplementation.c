#include"stack.h"
void main()
{
	char c;
	int size,ch=1;
	stack s;
	s.top=-1;
	printf("Enter the number of elements:");
	scanf("%d",&size);
	while(ch>0 && ch<5)
	{
		printf("\n1.Push\n2.Pop\n3.Check array status\n4.View array elements\n5.Exit\nEnter your choice:");
		scanf("%d",&ch);
		if(ch==1)
		{
			printf("Enter the element to be pushed:");
			getchar();
			scanf("%c",&c);
			push(&s,c,size);
		}
		else if(ch==2)
			printf("Element popped:%c\n",pop(&s,size));
		else if(ch==3)
		{
			if(chkfull(&s,size))
				printf("Stack is full\n");
			else if(chkempty(&s))
				printf("Stack is empty\n");
			else
				printf("Stack is neither full nor empty\n");
		}
		else if(ch==4)
			disp(&s);
	}
}	