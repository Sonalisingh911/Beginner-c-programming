/*If a four digit number is input through keyboard.Write a program to obtain the sum of 1st and last digit no.*/
#include<stdio.h>
#include<conio.h>
int main()
{
int n1,n,a,sm,b;
printf("enter num.=");
scanf("%d",&n);
n1=n;
a=n1%10;
n1=n1/1000;
b=n1%10;
sm=a+b;
printf("enter sm of fst and lst digit=%d",sm);
return 0;
}
