/*To convert guven temperature value from Celsius To Fahrenheit and vice versa*/
#include<stdio.h>
int main()
{
 int ch;
 float c,f;
 printf("       CHOICE MENU");
 printf("\n       ===========");
 printf("\n 1 for Celsius to Fahrenheit");
 printf("\n 2 for Fahrenheit to Celsius");
 printf("\n Enter your choice:");
 scanf("%d",&ch);
 if(ch==1)
  {
   printf("\n Enter temperature value in Celsius:");
   scanf("%f",&c);
   f=(c*9/5)+32;
   printf("The Fahrenheit temperature value is %f",f);
  }
 else if(ch==2)
  {
   printf("\nEnter temperature value in Fahrenheit:");
   scanf("%f",&f);
   c=(f-32)*5/9;
   printf("The Celsius temperature value is %f",c);
  }
 else
 printf(" Invalid option"); 
 return 0;
}   