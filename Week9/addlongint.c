#include"circdll.h"
void main()
{
	unsigned long int n;
	cdll head1,head2,heads;
	head1=(struct node*)malloc(sizeof(struct node));
	head2=(struct node*)malloc(sizeof(struct node));
	heads=(struct node*)malloc(sizeof(struct node));
	head1->right=head2->right=heads->right=NULL;
	printf("Enter the 1st number:");
	scanf("%ld",&n);
	while(n>0)
	{
		head1=insert(head1,n%10);
		n/=10;
	}
	printf("Enter the 2nd number:");
	scanf("%ld",&n);
	while(n>0)
	{
		head2=insert(head2,n%10);
		n/=10;
	}
	heads=add(head1,head2,heads);
	printf("\n");
	display(head1);
	printf(" + ");
	display(head2);
	printf("\n= ");
	display(heads);
}