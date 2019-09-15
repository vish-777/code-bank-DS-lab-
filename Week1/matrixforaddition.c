#include"addmat.h"
void main()
{
	int ch=1,m,n;
	while(ch==1)
	{printf("Enter the number of rows and columns:\n");
	scanf("%d%d",&m,&n);
	int a[10][10],b[10][10],c[10][10];
	printf("Enter the elements of the first matrix:");
	inputmat(a,m,n);
	printf("Enter the elements of the second matrix:");
	inputmat(b,m,n);
	printf("\nFirst matrix:\n");
	dispmat(a,m,n);
	printf("\nSecond matrix:\n");
	dispmat(b,m,n);
	printf("\nSum of the matrices:\n");
	summat(a,b,c,m,n);
	dispmat(c,m,n);
	printf("\n\n1:Try again\n2:Exit\nEnter your choice:");
	scanf("%d",&ch);
	}
}


