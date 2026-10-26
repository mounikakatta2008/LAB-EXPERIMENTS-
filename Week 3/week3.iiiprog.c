/*To find the area of triangle using heron's formula*/
#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,s,ta;
printf("Enter a,b and c values i.e,sides of triangle:");
scanf("%f%f%f",&a,&b,&c);
s=(a+b+c)/2;
ta=sqrt(s*(s-a)*(s-b)*(s-c));
printf("The area of triangle=%f",ta);
return 0;
}