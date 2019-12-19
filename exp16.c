/* Write a program to find power of any num x^y*/
#include<stdio.h>
#include<math.h>
int main()
{
float x,y,power;
printf("enter x and y");
scanf("%f%f",&x,&y);
power=pow(x,y);
printf("power of%f^%f=%f",x,y,power);
return 0;
}
