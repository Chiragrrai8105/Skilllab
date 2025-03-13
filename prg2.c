#include<stdio.h>
void main()
{
int i,n,a[20],sum=0,b,k;
 printf("\nEnter the number of players\n");
 scanf("%d",&n);
 printf("\nEnter the serial number for the %d players",n);
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }  
while(1)
{
  for(i=0;i<n;i++)
  {
  if(a[i]==k)
  {
  continue;
  printf("\nEnter the number from the %d player ranging from 1 to 10\n",a[i]);
  scanf("%d",&b);

  if(b>10)
  {
    printf("\nEnter the correct number");
  }
  else
  {
     sum=sum+b;
     printf("\nThe number total sum is %d\n",sum);
  }
  if(sum>=100)
  {
   printf("\nplayer %d is out\n",a[i]);
  }
  k=a[i];
  break;
  }
  }
  }
  }
  
  
  
