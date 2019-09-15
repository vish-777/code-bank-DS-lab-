#include"addmat.h"
int main()
{
	int a[10][10],b[10][10],c[10][10],m,n;
	printf("Enter number of rows and columns:");
	scanf("%d%d",&m,&n);
	printf("\nEnter first array:\n");
	inputmat(a,m,n);
	printf("\nEnter second array:\n");
	inputmat(b,m,n);
	printf("\nFirst array\n")
	dispmat(a,m,n);
	printf("\nSecond array\n")
	dispmat(b,m,n);
	summat(a,b,c,m,n)
	printf("\nSum of the above arrays:\n")
	dispmat(c,m,n);

}