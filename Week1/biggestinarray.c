#include"big.h"
void main()
{
	int a[20],n,i,ch=1;
	while(ch==1)
	{printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the array elements:\n");
	inputarr(a,n);
	printf("The array:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	int x=biggest(a,n);
	printf("\nThe biggest element is:%d",x);
	printf("\n\n1:Try again\n2:Exit\nEnter your choice:");
	scanf("%d",&ch);
	}
} 
