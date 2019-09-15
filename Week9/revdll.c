#include"cqueuerev.h"
void main()
{
	dll head;
	head=NULL;
	int n,i;
	char ele[30];
	printf("Enter the number of words:");
	scanf("%d",&n);
	printf("Enter the words(MAX 30 characters):\n");
	for(i=0;i<n;i++)
	{
		scanf("%s",ele);
		head=insert(head,ele);
	}
	printf("\nList:\n");
	display(head);
	head=reverse(head);
	printf("\nList after reversing:\n");
	display(head);
}