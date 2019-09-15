#include"TwoQueue.h"

int main()
{
	queue que;
  	que.front1=que.rear1=que.front2=que.rear2=-1;
  	int ch,x,size1,size2;
	printf("Enter size of 1st and 2nd queue(MAX 10):\n");
	scanf("%d%d",&size1,&size2);
  	do
	{
		printf("\n\n1:Insert to 1st queue\n2:Insert to 2nd queue\n3:Delete from 1st queue\n4:Delete from 2nd queue\n5:Display\nAny other key to exit\nEnter your choice:");
  	     	scanf("%d",&ch);
	     	if(ch==1)
			insert1(&que,size1);
                else if(ch==2)
                  	insert2(&que,size1,size2);
		else if(ch==3)
			delete1(&que,size1);
		else if(ch==4)
	                delete2(&que,size1,size2);
                else if(ch==5)
			display(que,size1,size2);
      }while(ch>0 && ch<6);
}
