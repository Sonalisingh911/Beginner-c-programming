/*Write a c program to find ma.bet two no.*/
#include<stdio.h>
int main()
{int a,b,max;
printf("enter two num");
scanf("%d%d",&a,&b);
if(a>b)
max=a;
else
max=b;
printf("max num=%d",max);
return 0;
}
