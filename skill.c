#include<stdio.h>
#include<stdlib.h>

void main()
{
   int r=5,b=5,g=5;
   char d;
   printf("\nEnter the color of the cycle which is rented by the user\n");
   scanf("%s",&d);
   if(d=='r')
   {
      printf("red colored cycle  is rented\n");
      int l=r-1;
      printf("remaining red colored cycle with owner is %d\n",l);
   }
   else if(d=='b')
   {
      printf("blue colored cycle  is rented\n");
      int x=b-1;
      printf("remaining blue colored cycle with owner is %d\n",x);
   }
    else if(d=='g')
   {
      printf("green colored cycle  is rented\n");
      int z=g-1;
      printf("remaining blue colored cycle with owner is %d\n",z);
   }
   else
   {
      printf("Demanded color by the user is not in stock\n");
   }   
}      
