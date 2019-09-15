#include<stdio.h>
void Square(int *a)
{
	*a=(*a)*(*a);
}
int * Largest(int *a,int *b)
{ if(*a>*b)
   return a;
  return b;
}

void Pointers(int ***r,int **q,int *p)
{  
	printf("\n%d\t%d\t%d\n",*p,**q,***r);
}