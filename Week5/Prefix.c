#include "conversion.h"
void main()
{
        char infix[20];
        printf("Enter fully paranthesized infix expression:");
        scanf("%s",infix);
        rev(infix);
        char prefix[20];
        int j,i;
        for(i=0,j=0;infix[i]!='\0';i++)
        {
                if(infix[i]==')')
    	           push(infix[i]);
                if(isop(infix[i])==1)
                {
                        if(prec(stack[top])<=prec(infix[i]))
                              push(infix[i]);
                        else
                        {
                                char t=pop();
                                while(t!=')')
                                {
                                        if(top==-1)
                                                break;
                                        prefix[j++]=t;
                                        t=pop();
                                }
                        }   
                }        
                if(isalpha(infix[i]))
                        prefix[j++]=infix[i];  
                if(infix[i]=='(')
                {
                        char t=pop();
                        while(t!=')')
                        {
                                if(top==-1)
                                break;
                                prefix[j++]=t;
                                t=pop();
                        }
                }
        }
  prefix[j]='\0';
  rev(prefix);
  printf("Prefix expression: %s\n",prefix);
}
