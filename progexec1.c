#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void store(char **arr,char *b,int i)
{
	int q;
	arr[i]=(char*)calloc(strlen(b)+1,sizeof(char));
	for(q=0;q<strlen(b);q++)
		arr[i][q]=b[q];
	arr[i][q]='\0';
}
void main()
{
	char **arr,b[300],x[30];
	printf("Enter the sentence:");
	scanf("%[^\n]",b);
	int i=0,w=0,j;
	
	for(i=0;b[i]!='\0';i++)
		if(b[i]==' ')
			w++;
	w++;
	arr=(char**)calloc(w+1,sizeof(char*));	
	arr[w]=NULL;
	int k=0;
	while(b[i]!='\0')
	{
		if(b[i]==' ')
		{
			x[i]='\0';
			store(arr,x,k);
			k++;
		}
		else
			x[i]=b[i];
		i++;
	}
	for(i=0;i<w;i++)
	{
		for(j=0;arr[i][j]!='\0';j++)
			printf("%s",arr[i]);
		printf("\n");	
	}
}