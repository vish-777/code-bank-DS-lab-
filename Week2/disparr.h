#include<stdio.h>
void forward(int a[20],int n)
{
	int *p;
	for(p=a;p<&a[n];p++)
		printf("%d\t\t",*p);
}
void backward(int a[20],int n)
{
	int *p;
	for(p=&a[n-1];p>=&a[0];p--)
		printf("%d\t\t",*p);
}
