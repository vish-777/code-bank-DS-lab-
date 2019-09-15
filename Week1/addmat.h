#include<stdio.h>
void summat(int a[10][10],int b[10][10],int c[10][10],int m,int n)
{
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			c[i][j]=a[i][j]+b[i][j];	
}
void dispmat(int a[10][10],int m,int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
    }
}
void inputmat(int a[10][10],int m,int n)
{
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);	
}
