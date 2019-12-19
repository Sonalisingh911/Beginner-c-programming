/*If a five digit no.is enter through keyboard.Write a program to reverse the number.*/
#include<stdio.h>
#include<conio.h>
int main()
{
int n,n1,a,b,c,d,e,reverse;
printf("enter number=");
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
reverse=a*10000+b*1000+c*100+d*10+e;
printf("sum of digits=%d",reverse);
return 0;
}
