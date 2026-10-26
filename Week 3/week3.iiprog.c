/*To find the compound interest of given amount */
#include<stdio.h>
#include<math.h>
int main()
{ 
 float p,n,r,ci;
 printf("Enter p,t and r values:");
 scanf("%f%f%f",&p,&n,&r);
 ci=p*pow((1+r/100),n)-p;
 printf("The compound interest of given amount=%f",ci);
 return 0;
} 