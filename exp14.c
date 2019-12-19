/* Write  program to convert temp in celsius into fahrenheit.*/
#include<stdio.h>
#include<conio.h>
int main()
{
float c,f;
printf("enter temp");
scanf("%f",&c);
f=((9/5)*c)+32;
printf("temp. in fahrenheit=%f",f);
return 0;}
