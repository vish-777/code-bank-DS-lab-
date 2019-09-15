#include<stdio.h>
typedef struct
{
	char arr[50];
	int top;
}stack;
int chkfull(stack *s,int size)
{
	if(s->top==size-1)
		return 1;
	return 0;
}
int chkempty(stack *s)
{
	if(s->top<0)
		return 1;
	return 0;	
}
void push(stack *s,char c,int size)
{
	if(!chkfull(s,size))
		s->arr[++(s->top)]=c;
	else
		printf("Stack Overflow");
}
char pop(stack *s,int size)
{
	if(!chkempty(s))
		return s->arr[s->top--];
	else
		printf("Stack Underflow");
}                                                                                                                                                  
void disp(stack *s)
{
	for(int i=0;i<=s->top;i++)
		printf("%c",s->arr[i]);
	printf("\n");
}