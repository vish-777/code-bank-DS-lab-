#include<stdio.h>
void towers(int n,char a,char b,char c)
{
	if(n==1)
	{
		printf("\nMoving disk 1 from tower %c to tower %c",a,c);
		return;
	}
	towers(n-1,a,b,c);
	printf("\nMoving disk %d from tower %c to tower %c",n,a,c);
	towers(n-1,b,c,a);
}
void main()
{
	int n;
	printf("Enter the number of disks:");
	scanf("%d",&n);
	printf("\nThe moves are:\n");
	towers(n,'A','B','C');
}