#include"cqueue.h"
void main()
{
	int i,n1,n2,ele;
	cll head1,head2,headu,headi;
	head1=head2=headu=headi=NULL;
	printf("Set 1\nEnter the number of elements:");
	scanf("%d",&n1);
	printf("Enter the elements:\n");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&ele);
		head1=insert(head1,ele);
	}
	printf("Set 2\nEnter the number of elements:");
	scanf("%d",&n2);
	printf("Enter the elements:\n");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&ele);
		head2=insert(head2,ele);
	}
	headu=unionll(head1,head2,headu);
	headi=intersectionll(head1,head2,headi);
	printf("\nSet 1:\n");
	display(head1);
	printf("Set 2:\n");
	display(head2);
	printf("\nUnion Set:\n");
	display(headu);
	printf("\nIntersection Set:\n");
	display(headi);
}