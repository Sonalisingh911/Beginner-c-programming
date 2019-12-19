/* If a five digit no. is input through the keyboard.Write a program to calculate sum of its digits. */
#include<stdio.h>
#include<conio.h>
int main()
{
int n,n1,sum,a,b,c,d,e;
printf("enter five digit no.=");
scanf("%d",&n);
n1=n;
a=n1%10;
n1=n1/10;
b=n1%10;
n1=n1/10;
c=n1%10;
n1=n1/10;
d=n1%10;
n1=n1/10;
e=n1%10;
n1=n1/10;
sum=a+b+c+d+e;
printf("sum of digits=%d",sum);
return 0;
}
