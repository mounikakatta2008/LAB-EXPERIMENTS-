/*To find the roots of a given quadratic equation*/
#include<stdio.h>
#include<math.h>
int main()
{ 
 int a,b,c,d;
 float f,s;
 printf("\nEnter coefficients of quadratic equation:");
 scanf("%d%d%d",&a,&b,&c);
 d=pow(b,2)-4*a*c;
 f=((-b)+sqrt(pow(b,2)-4*a*c))/(2*a);
 s=((-b)-sqrt(pow(b,2)-4*a*c))/(2*a);
 if(d>=0)
  printf("The roots of given quadratic equation is %f and %f",f,s);
 else
  printf("The roots of given quadratic equation are imaginary");
 return 0; 
}