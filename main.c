#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{ char str[40],**output,temp[20];
  int i,j,k=0;
  printf("Enter string:");
  scanf("%[^\n]",str);
  int x=strlen(str);
  str[x]=' ';
  str[x+1]='\0';
  int row=0;
  
  for(i=0;str[i]!='\0';i++)
   { if(str[i]==' ')
       row++;
  } 
  output=(char **)(calloc(row+1,sizeof(char *)));
  output[row]=NULL;
  
  
  
  for(i=0;i<row;i++)
  { for(j=0;str[k]!=' ';k++,j++)
       temp[j]=str[k];
    k++;
    temp[j]='\0';
    output[i]=(char *)calloc(strlen(temp),sizeof(char));
    strcpy(output[i],temp);
  }

 for(i=0;i<row;i++)
  { printf("%d:%s\n",i+1,output[i]);
  }

}
