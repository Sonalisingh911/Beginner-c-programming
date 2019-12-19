/*The length ,breadth of rect. and radius of circle are input through keyboard.Write a */

#include<stdio.h>
#include<conio.h>
int main()
{
int l,b,r,areaR,areaC,peri,cicum;
printf("enter length=");
scanf("%d,&l");
printf("enter breadth=");
scanf("%d,&b");
printf("enter radius=");
scanf("%d,&r");
areaR=l*b;
areaC=r*r;
peri=2*(l+b);
cicum=2*3.14*r;
printf("area of rect.=%d",areaR);
printf("peri of rect.=%d",peri);
printf("circumference of circle.=%d",cicum);
printf("areaC of circle.=%d",areaC);
return 0;
 }
