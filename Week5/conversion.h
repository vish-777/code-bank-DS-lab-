#include<string.h>
#include<stdio.h>
#include<ctype.h>
char stack[20];
int top=-1;

void push(char ch)
{stack[++top]=ch;}

char pop()
{return stack[top--];}

void rev(char *x)
{
	char temp;
  	for(int i=0,j=strlen(x)-1;i<j;i++,j--)
  	{
  		temp=x[i];
    	x[i]=x[j];
    	x[j]=temp;
  	}
} 
int isop(char x)
{ if(x=='+'||x=='-'||x=='*'||x=='/'||x=='%'||x=='^') 
    return 1;
  return 0;
}
int prec(char symbol)
{
	switch(symbol) {
		case '+':
		case '-':
		        return 2;
			break;
		case '*':
	        case '/':
		case '%':
		        return 4;
			break;
	        case '^':
		        return 6;
		break;
		        case '(':
		        case ')':
		        return 1;
		break;
	}
}
