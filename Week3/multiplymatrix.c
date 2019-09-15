#include<stdio.h>
void multiply (int m1, int n1, int a[10][10], int m2, int n2, int b[10][10], int c[10][10])
{
	static int i = 0, j = 0, k = 0;
	if (i >= m1)
		return;
	else if (i < m1)
    { 
    	if (j < n2)
    	{
    		if (k <n1)
    		{
    			c[i][j] += a[i][k] * b[k][j];
    			k++;
    			multiply(m1, n1, a, m2, n2, b, c);
    		}
		    k = 0;
            j++;							
            multiply(m1, n1, a, m2, n2, b, c);
        }    
        j = 0;
        i++;
        multiply(m1, n1, a, m2, n2, b, c);
    }
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
void accmat(int a[10][10],int m,int n)
{
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);	
}
void main()
{
	int a[10][10],b[10][10],c[10][10],r1,c1,r2,c2,ch=1;
	while(ch==1)
	{
		printf("Enter the number of rows and columns of 1st matrix:\n");
		scanf("%d%d",&r1,&c1);
		printf("Enter the number of rows and columns of 2nd matrix:\n");
		scanf("%d%d",&r2,&c2);
		if(c1!=r2)
		{
			printf("Multiplication wont be possible\nTry again\n\n");
			continue;
		}
		printf("Enter the elements of the 1st matrix:\n");
		accmat(a,r1,c1);
		printf("Enter the elements of the 2nd matrix:\n");
		accmat(b,r2,c2);
		printf("\nMatrix 1:\n");
		dispmat(a,r1,c1);
		printf("\nMatrix 2:\n");
		dispmat(b,r2,c2);
		for(int i=0;i<r1;i++)
			for(int j=0;j<c2;j++)
				c[i][j]=0;
		printf("\nProduct of the two matrices:\n");
		multiply(r1, c1, a, r2, c2, b, c);
		dispmat(c,r1,c2);
		printf("\n1.Try again\n2.Exit\nEnter your choice:");
		scanf("%d",&ch);
	}
}