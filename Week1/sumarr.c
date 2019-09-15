#include"sumarray.h"
int main()
{
	int a[20],i,n,ch;
	do{
		printf("Enter the number of array elements:");
	    scanf("%d",&n);
	    printf("Enter the array elements:\n");
	    for(i=0;i<n;i++)
	    	scanf("%d",&a[i]);
	    int x=sum(a,n);
	    printf("\nSum=%d",x);
	    printf("\n\n1:Try again\n2:Exit\nEnter your choice:");
	    scanf("%d",&ch);
	   }while(ch==1);	
}
