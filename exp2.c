/*The distace between two cities is input through keyboard.
Write a program to convert this distance into meters,feet,inches and centimeter.*/
#include<stdio.h>
#include<conio.h>
int main()
{
float km,m,ft,in,cm;
printf("enter distance");
scanf("%f",&km);
m=km*1000;
cm=m*100;
in=cm/2.54;
ft=in/12;
printf("distance=%f",km);
printf("in meter=%f",m);
printf("in cm=%f",cm);
printf("in in=%f",in);
printf("in feet =%f",ft);
return 0;


}
