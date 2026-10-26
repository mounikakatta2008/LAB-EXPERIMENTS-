/*To write a c program on precedence and associativity*/
#include<stdio.h>
#include<math.h>
int main()
{
 int a,b,c,d,e,f,g,h,i,j,k,l;
 printf("Enter a,b,c,d,e,f,g and i values:");
 scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&i);
 h=a+b*c+(d*e)+f*g;
 j=a/b*c  -  b+a*d/3;
 k=a++ + b-- - a;
 l=(i++)+(++i);
 printf("h=%d\tj=%d\tk=%d\tl=%d",h,j,k,l);
 return 0;
} 