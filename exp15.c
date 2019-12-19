/* Write a program to convert days into years ,weeks and days.*/
#include<stdio.h>
#include<conio.h>
int main()
{
int yrs,wk,dys;
printf("enter no of days");
scanf("%d",&dys);
yrs=dys/365;
dys=dys%365;
wk=dys/7;
dys=dys%7;
printf("no of years%d\n",yrs);
printf("no of weeks%d\n",wk);
printf("no of days%d\n",dys);
return 0;
}


