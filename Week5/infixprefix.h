#include<stdio.h>
#include<string.h>
char stack[25];
int top;
void push(char a)
{
	stack[++top]=a;
}
char pop()
{
	return stack[top--];
}
int isOP(char a)
{
	switch(a)
	{
		case '+':
		case '-':
		case '*':
		case '/':
		case '^':
		case '%':
		case '(':
		case ')':return 1;
				 break;
		default: return 0;
	}
}
int oprec(char a)
{
	switch(a)
	{
		case '*':
		case '/':return 1;
		case '+':
		case '-':return 2;
		case '^':
		case '!':return 3;
		case '%':return 4;
		case '(':return 5;
	}
}
void rev(char a[25])
{
	char temp;
	for(int i=0,j=strlen(a)-1;i<=strlen(a)/2;i++)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
}
void iftopf(char a[25],char b[25])
{
	rev(a);
	top=-1;
	int i,j;
	char symbol;
	for(i=0,j=0;a[i]!='\0';i++)
	{
		symbol=a[i];
		if(isOP(symbol)==1 || symbol==')')
			push(symbol);
		else if(symbol!='(')
			b[j++]=symbol; 
		else
		{
			char t=pop();
            while(t!=')')
            {
            	if(top==-1)
                	break;
                b[j++]=t;
                t=pop();
            }
		}
	}
	b[strlen(a)]='\0';
	rev(b);
}