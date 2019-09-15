#include<stdio.h>
typedef struct 
{
	int stack[50],index1,index2;
}st;
void push(st *s,int c,int n)
{
	if(c==1)
		s->stack[++(s->index1)]=n;
	else
		s->stack[--(s->index2)]=n;
}
int pop(st*s,int c)
{
	if(c==1)
		return(s->stack[(s->index1)--]);
	else
		return(s->stack[(s->index2)++]);
}
void disp(st *s,int n)
{
	printf("First stack:\n");
	for(int i=s->index1;i>=0;i--)
		printf("%d\t",s->stack[i]);
	printf("\nSecond stack:\n");
	for(int i=n-1;i>=s->index2;i--)
		printf("%d\t",s->stack[i]);
	printf("\n");
}
void main()
{
	int ele,n1,n2,ch;
	st s;
	printf("Enter the number of elements of 1st & 2nd stack:\n");
	scanf("%d%d",&n1,&n2);
	s.index1=-1;
	s.index2=n1+n2;
	do
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
