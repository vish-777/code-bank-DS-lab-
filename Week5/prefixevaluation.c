#include<string.h>
#include<ctype.h>
#include<stdio.h>
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

int evaluate(int op1,char x,int op2)
{ if(x=='+')
   return (op1+op2);
  if(x=='-')
    return (op1-op2);
  if(x=='*')
   return (op1*op2);
  if(x=='/')
   return (op1/op2);
  if(x=='%')
   return (op1%op2);
}

int isnum(char x)
{ if(x>='0' && x<='9')
   return 1;
  return 0;
}

int main()
{ 
  char prefix[20],x,op;
  printf("Enter prefix expression:");
  scanf("%s",prefix);
  rev(prefix);
  int i,op1,op2;
  for(i=0;prefix[i]!='\0';i++)
  {  if(isnum(prefix[i])==1)
        push(prefix[i]);
     else if(isop(prefix[i])==1)
       { op1=pop()-'0';
         op2=pop()-'0';
         op=prefix[i];
         push(evaluate(op1,op,op2)+'0');
       }
   }
  printf("\nResult:%d\n",pop()-'0');

}