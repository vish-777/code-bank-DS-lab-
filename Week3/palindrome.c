#include<stdio.h>
#include<string.h>
int palin(char *str,int li,int ri)
{
	if(li>ri)
		return 1;
	if(str[li]==str[ri])
		return(palin(str,li+1,ri-1));
	return 0;	
}
void main()
{
	char a[50];
	int x,ch=1;
	while(ch==1)
	{
		printf("Enter the string:");
		scanf("%s",a);
		x=palin(a,0,strlen(a)-1);
		if(x==1)
			printf("Its a palindrome");
		else
			printf("Not a palindrome");
		printf("\n1.Try again\n2.Exit\nEnter your choice:");
		scanf("%d",&ch);
	}	
}