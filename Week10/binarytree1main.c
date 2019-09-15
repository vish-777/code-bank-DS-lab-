#include"binarytree1.h"
void main()
{
	tree root,temp;
	root=NULL;
	int ch,n;
	do
	{
		printf("\n1.Insert element\nAny other key to exit insertion\nEnter your choice:");
		scanf("%d",&ch);
		if(ch==1)
		{
			printf("Enter the element to insert:");
			scanf("%d",&n);
			temp=create(n);
			root=insert(root,temp);
		}
		else
			break;
	}while(ch==1);
	printf("\nInorder:\n");
	inorder(root);
	printf("\nPreorder:\n");
	preorder(root);
	printf("\nPostorder:\n");
	postorder(root);
	printf("\nEnter the element to search:");
	scanf("%d",&n);
	preordersearch(root,n);
	if(flag==1)
		printf("\nElement is present\n");
	else
		printf("\nElement isnt present\n");
}