/*To find whether the given year is leap year or not*/
#include<stdio.h>
int main()
{
 int n;
 printf("\nEnter any year value:");
 scanf("%d",&n);
 if((n%400==0) || (n%4==0 && n%100!=0))
 printf("The given year is leap year");
 else
 printf("The given year is not a leap year");
 return 0; 
} 