#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *link;
}*sll;
sll insert(sll head,int n)
{
	sll temp,temp1;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=n;
	temp->link=NULL;
	if(head==NULL)
		return temp;
	temp1=head;
	while(temp1->link!=NULL)
		temp1=temp1->link;
	temp1->link=temp;
	return head;
}

void display(sll head)
{
	if(head==NULL)
	{
		printf("Empty list\n");
		return;
	}
	for(sll temp=head;temp;temp=temp->link)
		printf("%d\t",temp->data);
}

void main()
{
	sll head1=NULL,head2=NULL,temp1,temp2;
	int i,n,x;
	printf("Enter the number of elements of list 1:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		head1=insert(head1,x);
	} 
	printf("Enter the number of elements of list 2:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		head2=insert(head2,x);
	}
	
	temp1=head1;
	temp2=head2;
		printf("\nList 1:\n");
	display(head1);
	printf("\nList 2:\n");
	display(head2);
	while(temp2!=NULL && temp1!=NULL)
	{
		sll temp=NULL;
		temp=insert(temp,temp2->data);
		temp->link=temp1->link;
		temp1->link=temp;
		temp1=temp1->link->link;
		temp2=temp2->link;
	}
	while(temp2!=NULL)
	{
		head1=insert(head1,temp2->data);
		temp2=temp2->link;
	}


	printf("\nMerged List:\n");
	display(head1);
}