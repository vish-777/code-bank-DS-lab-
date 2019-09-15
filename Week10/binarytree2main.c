#include"binarytree2.h"
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
}