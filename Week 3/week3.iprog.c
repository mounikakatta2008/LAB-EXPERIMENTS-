/*To find the square root given number*/
#include<stdio.h>
#include<math.h>
int main()
{
 int n;
 float s;
 printf("Enter n value:");
 scanf("%d",&n);
 s=sqrt(n);
 printf("The square root value of %d is %f",n,s);
 return 0;
}