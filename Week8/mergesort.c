#include"singlylinkheader.h"
void main()
{
	sll head1,head2,headf,temp1,temp2;
	head1=(struct node*)malloc(sizeof(struct node));
	head2=(struct node*)malloc(sizeof(struct node));
	headf=(struct node*)malloc(sizeof(struct node));
	head1->link=head2->link=headf->link=temp1=temp2=NULL;
	int i,n;
	char x;
	printf("Enter the number of elements of list 1:");
    scanf("%d",&n);
    printf("Enter the elements in ascending order:\n");
	for(i=0;i<n;i++)
	{
		scanf(" %c",&x);
		head1=insert(head1,x);
	} 
	printf("Enter the number of elements of list 2:");
    scanf("%d",&n);
    printf("Enter the elements in ascending order:\n");
	for(i=0;i<n;i++)
	{
		scanf(" %c",&x);
		head2=insert(head2,x);
	}    
	temp1=head1->link;
	temp2=head2->link;
	while(temp1 && temp2)
	{
		if(temp1->data < temp2->data)
		{
			headf=insert(headf,temp1->data);
			temp1=temp1->link;
		}
		else
		{
			headf=insert(headf,temp2->data);
			temp2=temp2->link;
		}
	}
	for(;temp1;temp1=temp1->link)
		headf=insert(headf,temp1->data);
	for(;temp2;temp2=temp2->link)
		headf=insert(headf,temp2->data);
	printf("\nList 1:\n");
	display(head1);
	printf("\nList 2:\n");
	display(head2);
	printf("\nMerged list:\n");
	display(headf);
}