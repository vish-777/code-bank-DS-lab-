#include"infixprefix.h"
void main()
{
	char infix[25],prefix[25];
	printf("Enter the infix expression: ");
	scanf("%s",infix);
	iftopf(infix,prefix);
	printf("The prefix expression is: %s\n",prefix);
}