#include<stdio.h>
#include<math.h>
void getdata(float *a1,float *b1,float *c1)
{
	printf("\nEnter the coefficient of x^2 :");
	scanf("%f",a1);
	printf("Enter the coefficient of x :");
	scanf("%f",b1);
	printf("Enter the constant :");
	scanf("%f",c1);
}
void quad(float a,float b,float c,float *x,float *r1,float *r2)
{
	*x=sqrt((b*b)-4*a*a);
	*r1=(-b+*x)/(2*a);
	*r2=(-b-*x)/(2*a);
}
void print_roots(float x,float r1,float r2)
{
	if(x>=0)
	{
		printf("Root1: %f",r1);
		printf("\nRoot2: %f\n",r2);
	}
	else
		printf("No real roots\n");
}
