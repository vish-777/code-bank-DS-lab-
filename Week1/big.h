#include<stdio.h>
void inputarr(int a[20],int n)
{
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
}
int biggest(int a[20],int n)
{
	int big=a[0];
	for(int i=1;i<n;i++)
		if(a[i]>big)
			big=a[i];
	return big;
}
