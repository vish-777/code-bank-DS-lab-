#include"demohead.h"
int main()
{
	int a,b,c,ch=1;
	int *p=&a,*q=&b,*r=&c;
	while(ch!=4)
	{
		printf("\n\n1:Pointers to function\n2:Pointers from function\n3:Pointer to pointer\n4:Exit\nEnter your choice:");
		scanf("%d",&ch);
		if(ch==1)
        {
        	printf("\nSquare of a number\nEnter the number:");
         	scanf("%d",p);
         	Square(p);
         	printf("Square= %d",*p);
        }  
        if(ch==2)
        {
        	printf("Largest of two numbers\nEnter two numbers:\n");
         	scanf("%d%d",p,q);
         	r=Largest(p,q);
		printf("Largest is :%d",*r);
        }
        if(ch==3)
        {
        	printf("\nAccessing same variable through different pointer levels\nEnter the number:");
          	scanf("%d",&a);
          	p=&a;
          	int **q=&p;
          	int ***r=&q;
          	Pointers(r,q,p);
        }    

	}
}
