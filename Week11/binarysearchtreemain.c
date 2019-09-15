#include"binarysearchtree.h"

void main()
{
	tree root=NULL,temp;
	int n,ele;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&ele);
		temp=create(ele);
		root=insert(root,temp);
	}
	printf("Level order traversal:\n");
	displevel(root);
}