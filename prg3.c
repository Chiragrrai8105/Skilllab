#include<stdio.h>
#include<stdlib.h>
void main()
{
   int t[5],total=0,i,j;
   char team[]={'w','x','y','z'};
   char p[]={'A','B','C','D'};
   for(i=0;i<3;i++)
   {
   	printf("The Baton is with %c player\n",p[i]);
   	t[i]=(rand()%4)+1;
   	printf("The time taken by the Player %c is %d\n",p[i],t[i]);
   	if(t[i]==1)
   	{
		printf("The %c player is running like cheetah\n",p[i]);
	}
	else if(t[i]==2)
	{
		printf("The %c player is running like deer\n",p[i]);	
   	}
   	else
   	{
   		printf("The %c player is running like donkey\n",p[i]);
   	}
   
   }
        for(i=0;i<3;i++)
        {
   	total=total+t[i];
        }
        printf("The total time taken by the team is %d\n",total);
}   		
   

