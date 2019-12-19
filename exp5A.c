/*The length ,breadth of rect. and radius of circle are input through keyboard.
Write a program to calculate the area and perimeter of rect. and circum and area of circle.*/

#include<stdio.h>
#include<conio.h>
int main()
{
float l,b,r,areaR,areaC,peri,cicum;
printf("enter length,bred,rad=");
scanf("%f%f%f",&l,&b,&r);
areaR=l*b;
areaC=3.14*r*r;
peri=2*(l+b);
cicum=2*3.14*r;
printf("area of rect.=%f\n",areaR);
printf("peri of rect.=%f\n",peri);
printf("circumference of circle.=%f\n",cicum);
printf("areaC of circle.=%d\n",areaC);
return 0;
 }


