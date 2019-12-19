#include<stdio.h>
int main()
{int n,n1,a,rev=0;
printf("enter 5 digit num");
scanf("%d",&n);
n1=n;
a=n1%10;
n1=n1/10;
rev=rev+a*10000;
a=n1%10;
n1=n1/10;
rev=rev+a*1000;
a=n1%10;
n1=n1/10;
rev=rev+a*100;
a=n1%10;
n1=n1/10;
rev=rev+a*10;
a=n1%10;
n1=n1/10;
rev=rev+a;
if(n==rev)
 printf("palandrome num");
else
 printf("not palandrome num");
return 0;
}
