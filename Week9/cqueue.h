#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *link;
}*cll;

cll insert(cll head,int a)
{
	cll temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=a;
	temp->link=temp;	
	if(head==NULL)
		return temp;
	cll temp1=head;
	while(temp1->link!=head)
		temp1=temp1->link;
	temp1->link=temp;
	temp->link=head;
	return head;
}

void display(cll head)
{
	if(head==NULL)
    {
        printf("Empty list\n");
        return;
    }
	cll temp=head;
	printf("%d\t",temp->data);
	temp=temp->link;
	for(;temp!=head;temp=temp->link)
    	printf("%d\t",temp->data);
    printf("\n");
}

int present(cll head,int x)
{
	cll temp=head;
	while(temp->link!=head)
	{
		if(temp->data==x)
			return 1;
		temp=temp->link;
	}	
	if(temp->data==x)
		return 1;
	return 0;								
}

cll unionll(cll head1,cll head2,cll headf)
{
	cll temp;
	temp=head1;	
	do
	{
		headf=insert(headf,temp->data);
		temp=temp->link;
	}while(temp!=head1);
	temp=head2;
	do
	{
		if(present(head1,temp->data))
		{
			temp=temp->link;
			continue;
		}	
		else
			headf=insert(headf,temp->data);
		temp=temp->link;
	}while(temp!=head2);
	return headf;
}

cll intersectionll(cll head1,cll head2,cll headf)
{
	int x;
	cll temp1,temp2;
	temp1=head1;
	do	
	{
		temp2=head2;
		do
		{
			if(temp1->data==temp2->data)
				headf=insert(headf,temp1->data);
			temp2=temp2->link;
		}while(temp2!=head2);
		temp1=temp1->link;
	}while(temp1!=head1);	
	return headf;		
}