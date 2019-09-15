#include<stdio.h>
#include<stdlib.h>
typedef struct stk *stkptr
{
	int data;
	stkptr link;
}stack;

void push(stack *s,int a)
{
	stack *temp;
	temp=(stack*)malloc(sizeof(stack));
	temp->data=a;
	if(s->top==NULL)
	{
		s->top=temp;
		top->link=NULL;
	}	
	else
	{
		temp->link=top;
		top=temp;
	}
}

void pop(stack *s)
{
	stack *temp;
	if(top==NULL)
	{
		printf("Empty stack");
		return;
	}
	printf("%d deleted",top->data)
}