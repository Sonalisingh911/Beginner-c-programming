/*The length ,breadth of rect. and radius of circle are input through keyboard.Write a */

#include<stdio.h>
#include<conio.h>
int main()
{
int l,b,r,areaR,areaC,peri,cicum;
printf("enter length,bred,rad=");
scanf("%d%d%d",&l,&b,&r);
areaR=l*b;
areaC=3.14*r*r;
peri=2*(l+b);
cicum=2*3.14*r;
printf("area of rect.=%d\n",areaR);
printf("peri of rect.=%d\n",peri);
printf("circumference of circle.=%d\n",cicum);
printf("areaC of circle.=%d\n",areaC);
return 0;
 }
