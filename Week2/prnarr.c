#include"disparr.h"
void main()
{
	int a[20],n,ch=1;
	while(ch==1)
	{
		printf("Enter the number of elements:");
		scanf("%d",&n);
		printf("Enter the array elements:\n");
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		printf("\nArray in forward direction:\n");
		forward(a,n);
		printf("\nArray in backward direction:\n");
		backward(a,n);
		printf("\n\n1.Try again\n2.Exit\nEnter your choice:");
		scanf("%d",&ch);
	}			
}