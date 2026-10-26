/*To find the biggest of three numbers by using conditional operator*/
#include<stdio.h>
int main()
{
 int a,b,c;
 printf("\nEnter a,b & c values:");
 scanf("%d%d%d",&a,&b,&c);
 (a>b && a>c)?printf("%d is big",a):(b>c)?printf("%d is big",b):printf("%d is big",c);
 return 0;
} 