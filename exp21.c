#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,d,e,total,avg,per;
printf("enter marks of 5 sub");
scanf("%d%d%d%d%d%",&a,&b,&c,&d,&e);
total=a+b+c+d+e;
avg=total/5;
per=total*0.2;
printf("enter total=%d",total);
printf("enter avg=%d",avg);
printf("enter per=%d",per);
return 0;
}
