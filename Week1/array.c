#include"linearsearch.h"
int main()
{
	int a[20],n,ele,i,ch=1;
	while(ch==1)
	{
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the element to search:");
	scanf("%d",&ele);
	printf("Position=%d",linearsearch(a,n,ele));
	printf("\n\n1:Try again\n2:Exit\nEnter your choice:");
	scanf("%d",&ch);
   }
}
