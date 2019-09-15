#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	char data;
	struct node *leftc;
	struct node *rightc;
}*tree;

int isoperator(char x)
{ if(x=='+'||x=='-'||x=='*'||x=='/'||x=='%'||x=='^') 
    return 1;
  return 0;
}

tree insert(char x[20])
{
	int top=-1,i;
	tree stack[20],temp;
	for(i=0;x[i]!='\0';i++)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		temp->data=x[i];
	    temp->leftc=temp->rightc=NULL;
		if(!isoperator(x[i]))
			stack[++top]=temp;
		else
		{
			temp->rightc=stack[top--];
			temp->leftc=stack[top--];
			stack[++top]=temp;
		}
	}
	return stack[top--];
}

int eval(tree root)
{
	if(!root)
		return 0;
	if(!root->leftc && !root->rightc)
		return (int)(root->data-'0');
	int left=eval(root->leftc);	
	int right=eval(root->rightc);
	switch(root->data)
	{
		case '+':return left+right;
		case '-':return left-right;
		case '*':return left*right;
		case '/':return left/right;
		case '%':return left%right;
		case '^':return left^right;
	}
	return 0;
}

void main()
{
	char arr[20];
	printf("Enter the expression:");
	scanf("%s",arr);
	tree root=NULL;
	root=insert(arr);
	printf("Postfix evaluation = %d",eval(root));
}