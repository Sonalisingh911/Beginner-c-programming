#include<stdio.h>
int main()
{ int a,b,c,max;
printf("enter num to compare");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{if(a>c)
max=a;
else
max=c;}
else
{if(b>c)
max=b;
else
max=c;}
printf("max value=%d",max);
return 0;}
