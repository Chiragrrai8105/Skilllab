#include<stdio.h>
#include<stdlib.h>
void main()
{
   int t[5]={0,0,0,0,0};
   int total=0;
   int t1[5]={0,0,0,0,0};
   int i,j;
   char team[]={'w','x','y','z'};
   char p[]={'A','B','C','D'};
   for (j=0;j<4;j++)
   {
   printf("The team %c is in the form\n",team[j]);
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
       t1[j]=total;
        printf("The total time taken by the team %c the all Player is %d\n\n\n\n",team[j],t1[j]);
        }
        
       if(t1[0]>t1[1] && t1[0]>t1[2] && t1[0]>t1[3] && t1[0]>t1[4])
       {
          printf("team w is the winner\n");
       }  
       else if(t1[1]>t1[0] && t1[1]>t1[2] && t1[1]>t1[3] && t1[1]>t1[4])
       {
          printf("team x is the winner\n");
       } 
        else if(t1[2]>t1[0] && t1[2]>t1[1] && t1[2]>t1[3] && t1[2]>t1[4])
       {
          printf("team y is the winner\n");
       } 
       else if(t1[3]>t1[0] && t1[3]>t1[1] && t1[3]>t1[2] && t1[3]>t1[4])
       {
          printf("team z is the winner\n");
       } 
      
}   		
   
 
