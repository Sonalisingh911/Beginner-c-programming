/*Ramesh's basic salary is input through the keyboard.His dearness allowance is 40% of basic salary ,and house rent allowance is 20% of basic salary.
Write a program to calculate his gross salary? */

#include<stdio.h>
#include<conio.h>
int main()
{
float bs,da,hra,gs ;
printf("enter bs of ramesh");
scanf("%f",&bs);
da= bs*0.4;
hra=bs*0.2;
printf("basaic salary=%f",bs);
printf("da=%f",da);
printf("hra%f",hra);
printf("gross salary=%f",gs);
return 0;
 }
