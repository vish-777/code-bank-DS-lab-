#include"cqueue.h"
int present(int arr[],int x,int n1)
{
	for(int i=0;i<n1;i++)
		if(arr[i]==x)
			return 1;
	return 0;					
}
cll unionll(cll head1,cll head2,cll headf,int n1,int n2)
{
	int arr[n1+n2],i,x;
	cll temp;
	for(i=0,temp=head1;temp->link!=head1;temp=temp->link,i++)
	{
		arr[i]=head1->data;
		headf=insert(headf,arr[i]);
	}	
	arr[i]=head1->data;
	headf=insert(headf,arr[i]);
	for(temp=head2;temp2->link!=head2;temp=temp->link)
	{
		if(present(arr,temp->data,n1))
			continue;
		else
			headf=insert(headf,arr[i]);
	}
	if(!present(arr,temp->data,n1))
		headf=insert(headf,arr[i]);
}