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
	int top=-1;
	tree stack[20],temp,temp1,temp2;
	for(i=0;x[i]!='\0';i++)
	{
		temp->data=x;
	    temp->leftc=temp->rightc=NULL;
		if(!isop(x))
			stack[++top]=temp;
		else
		{
			temp1=stack[top--];
			temp2=stack[top--];
			temp->leftc=temp1;
			temp->rightc=temp2;
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
	int left=eval(root->left);	
	int right=eval(root->right);
	switch(tree->data)
	{
		case '+':return left+right;
		case '-':return left-right;
		case '*':return left*right;
		case '/':return left/right;
		case '%':return left%right;
		case '^':return left^+right;
	}
	return;
}

void main()
{
	char arr[20];
	printf("Enter the expression:");
	scanf("%s",arr);
	tree root=insert(arr);
	printf("Postfix evaluation = %d",eval(root));
}