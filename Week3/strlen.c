#include<stdio.h>
int strl(char str[20],int index)
{
	if(str[index]=='\0')
	return 0;
	return(1+strl(str,index+1));
}
void main()
{
	char a[20];
	int x,ch=1;
	while(ch==1)
	{
		printf("Enter the string:");
	    scanf("%s",a);
		x=strl(a,0);
		printf("String length=%d",x);
		printf("\n1.Try again\n2.Exit\nEnter your choice:");
		scanf("%d",&ch);
	}		
}