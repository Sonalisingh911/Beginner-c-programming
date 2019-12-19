#include<stdio.h>
int main()
{ int a,b,c,max;
printf("enter num to compare");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
max=a;
if(b>a && b>c)
max=b;
if(c>a && c>b)
max=c;
printf("max num=%d",max);
return 0;}

