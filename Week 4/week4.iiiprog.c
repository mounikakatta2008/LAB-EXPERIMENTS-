/*To find the total and average of 5 subjects marks*/
#include<stdio.h>
int main()
{
 int s1,s2,s3,s4,s5,tot;
 float avg;
 printf("Enter 5 subjects marks:");
 scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
 tot=s1+s2+s3+s4+s5;
 avg=tot/5.0;
 printf("Total marks of a student=%d",tot);
 printf("\nAverage of total marks=%f",avg);
 return 0;
} 