/*To write c programmes using printf() and scanf()*/
#include<stdio.h>
int main()
{
int a,b,c;
printf("\nEnter any two numbers:");
scanf("%d%d",&a,&b);
c=a+b;
printf("Sum of given two numbers=%d",c);
return 0;
}