#include<stdio.h>
int cpystr(char *str,char* strc)
{
	if(str[0]=='\0')
	{
		strc[0]='\0';
		return 0;
	}
	strc[0]=str[0];
	return(cpystr(&str[1],&strc[1]));
}
void main()
{
	char a[20],ac[20];
	int ch=1;
	while(ch==1)
	{
		printf("Enter the string:");
		scanf("%s",a);
		cpystr(a,ac);
		printf("\nOriginal string: %s\nCopied string:%s",a,ac);
		printf("\n1.Try again\n2.Exit\nEnter your choice:");
		scanf("%d",&ch);
	}	
}