#include"addnum.h"
void main()
{
	int a,b,c,*sum,ch=1;
	sum=&c;
	while(ch==1)
	{
	 printf("Enter the two numbers:\n");
	 scanf("%d%d",&a,&b);
	 add(&a,&b,sum);
	 printf("\nSum=%d",*sum);
         printf("\n\n1.Try again\n2.Exit\nEnter your choice:");
	 scanf("%d",&ch);
	}
	 
}
