#include<stdio.h>
int linearsearch(int a[],int n,int ele)
{
	int p=-1;
	for(int i=0;i<n;i++)
		if(a[i]==ele)
			{
				p=i+1;
				break;
			}
	return p;		

}