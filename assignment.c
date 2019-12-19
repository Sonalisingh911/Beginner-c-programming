#include<stdio.h>
#include<conio.h>
int main()
{int total,num,svnl,fvl,onl;
printf("enter num");
scanf("%d",&num);
svnl=num/7;
num=num%7;
fvl=num/5;
num=num%5;
onl=num/1;
num=num%1;
total=svnl+fvl+onl;
printf("no.of 7L %d\n",svnl);
printf("no.of 5L %d\n",fvl);
printf("no.of 1L %d\n",onl);
printf("total num of bottles %d",total);
return 0;
}
