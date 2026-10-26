/*To write a c program using switch statement*/
#include<stdio.h>
int main()
{
 int a,b,ch,r;
 printf("       CHOICE MENU");
 printf("\n       ===========");
 printf("\n1 for Addition");
 printf("\n2 for Subtraction");
 printf("\n3 for Multiplication");
 printf("\n4 for Division");
 printf("\nEnter a and b values:");
 scanf("%d%d",&a,&b); 
 printf("Enter your choice:");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1:
  r=a+b;
  printf("Addition of given two numbers=%d",r);
  break;
  case 2:
  r=a-b;
  printf("Subtraction of given two numbers=%d",r);
  break;
  case 3:
  r=a*b;
  printf("Multiplication of given two numbers=%d",r);
  break;
  case 4:
  r=a/b;
  printf("Division of given two numbers=%d",r);
  break;
  default:
  printf("The given choice is not available");
 } 
return 0; 
} 