#include<stdio.h>
typedef struct
{
	char arr[50];
	int top;
}stack;
void push(stack *s,char c)
{
	s->arr[++(s->top)]=c;
}
char pop(stack *s)
{
	return s->arr[s->top--];
}
void main()
{
	char str[50];
	int ch=1,i,flag;
	stack s;
	s.top=-1;
	while(ch==1)
	{
		flag=1;
		printf("Enter the string:");
		scanf("%s",str);
		for(i=0;str[i]!='\0';i++)
			push(&s,str[i]);
		s.arr[i]='\0';
		for(i=0;str[i]!='\0';i++)
		{
			if(pop(&s)!=str[i])
			{flag=0;break;}
		}
		if(flag)
			printf("Its a palindrome");
		else
			printf("Its not a palindrome");
		printf("\n1.Try Again\n2.Exit\nEnter your choice:");
		scanf("%d",&ch);
	}
}