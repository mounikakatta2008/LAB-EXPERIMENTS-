/*To find the distance travelled by an object*/
#include<stdio.h>
#include<math.h>
int main()
{
 float x1,y1,x2,y2,d;
 printf("Enter values for x1,y1,x2 and y2:");
 scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
 d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
 printf("The distance travelledby an object=%f",d);
 return 0;
}