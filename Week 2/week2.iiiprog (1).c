/*To find the simple interest for given amount*/
#include<stdio.h>
int main()
{
 float p,t,r,si;
 printf("Enter p,t and r values:");
 scanf("%f%f%f",&p,&t,&r);
 si=(p*t*r)/100;
 printf("Simple interest of given amount=%f",si);
 return 0;
} 