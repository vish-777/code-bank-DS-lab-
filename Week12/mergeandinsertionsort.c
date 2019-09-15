#include<stdio.h>
#include"disp.h"
#include"insertionsort.h"
void main()
{
	int s1,s2,i,j,k;
	printf("Enter size of first array:");
	scanf("%d",&s1);
	int arr1[s1];
	printf("Enter the elements:\n");
	input(arr1,s1);
	printf("Enter size of second array:");
	scanf("%d",&s2);
	int arr2[s2];
	printf("Enter the elements:\n");
	input(arr2,s2);
	int arr[s1+s2];
	insertion_Sort(arr1,s1);
	insertion_Sort(arr2,s2);
	printf("\nSorted array 1:\n");
	disp(arr1,s1);
	printf("\nSorted array 2:\n");
	disp(arr2,s2);
	for(k=0,i=0,j=0;i<s1,j<s2;)
		if(arr1[i]<arr2[j])
			arr[k++]=arr1[i++];
		else
			arr[k++]=arr2[j++];
	while(i<s1)
		arr[k++]=arr1[i++];
	while(j<s2)
		arr[k++]=arr1[j++];
	printf("\nMerged array:\n");
	disp(arr,s1+s2);
}
void disp(int arr[],int n)
{
	for (int i=0;i<n;i++)
       printf("%d\t",arr[i]);
}
void input(int arr[],int n)
{
    for(int i=0;i<n;i++)
      scanf("%d",&arr[i]);
}
void insertion_Sort(int arr[],int n)
{
   int i,key,j;
   for (i=1;i<n;i++)
   {
       key=arr[i];
       j=i-1;
 	   while(j>=0 && arr[j]>key)
       {
           arr[j+1]=arr[j];
           j=j-1;
       }
       arr[j+1]=key;
   }
}
