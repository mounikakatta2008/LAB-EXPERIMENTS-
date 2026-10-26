/*To find the sum and average of given three numbers*/
#include<stdio.h>
int main()
{
 int a,b,c,s;
 float avg;
 printf("\nEnter a,b and c values:");
 scanf("%d%d%d",&a,&b,&c);
 s=a+b+c;
 avg=(a+b+c)/3.0;
 printf("The sum of given three numbers=%d",s);
 printf("\nThe average of given three numbers=%f",avg);
 return 0;
} 