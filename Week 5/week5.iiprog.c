/*To find the total current bill amount by taking inputs as number of units*/
#include<stdio.h>
int main()
{
 float u,cost,tot;//tot=total bill amount 
 printf("\n Enter number of units consumed:");
 scanf("%f",&u);
 if(u<=100)
  cost=1.50;
 else if(u<=200)
  cost=2.50;
 else if(u<=500)
  cost=4.00;
 else 
 cost=6.00;
 tot=u*cost;
 printf("The total bill amount=%f",tot);
 return 0;
}  
   