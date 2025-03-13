#include<stdio.h>
void main()
{
int a1,b1,a2,b2,c1,c2,i;
printf("Enter a1,b1,c1,a2,b2,c2:");
scanf("%d%d%d%d%d%d",&a1,&b1,&c1,&a2,&b2,&c2);
for(i=0;i<10;i++)
{
   if(a1-a2==0)
   {
   	printf("%d",a1-a2);
   	break;
   }
  else if((a1*i)-a2==0)
  {
  	 printf("%d",((a1*i)-a2));
  	 break;
  }
  else if((a1-(a2*i)==0))
  {
  	printf("%d",(a1-(a2*i)));
  	break;
  }
}}  		 
  	 	

