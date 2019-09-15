#include<stdio.h>
typedef struct
{
	int arr[50];
	int top;
}stack;
void push(stack *s,int c)
{
	s->arr[++(s->top)]=c;
}
int pop(stack *s)
{
	return s->arr[s->top--];
}
void main()
{
	int num,ch=1;
	stack s;
	s.top=-1;
	while(ch==1)
	{
		printf("Enter the number:");
		scanf("%d",&num);
		while(num>0)
		{
			push(&s,num%2);
			num/=2;
		}
		printf("Binary equivalent=");
		while(s.top>=0)
			printf("%d",pop(&s));
		printf("\n1.Try Again\n2.Exit\nEnter your choice:");
		scanf("%d",&ch);
	}
}