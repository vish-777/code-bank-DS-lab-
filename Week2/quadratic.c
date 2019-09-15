#include"root.h"
void main()
{
	int ch=1;
	float a,b,c,x,r1,r2;
	while(ch==1)
	{	
		getdata(&a,&b,&c);
		quad(a,b,c,&x,&r1,&r2);
		printf("\nThe roots are:\n");
		print_roots(x,r1,r2);
		printf("\n1.Try again\n2.Exit\nEnter your choice:");
		scanf("%d",&ch);
	}
}