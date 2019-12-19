#include<stdio.h>
int main()
{int n,c,t,s=0;
printf("enter num");
scanf("%d",&n);
t=n;
while(n>0)
       {c=n%10;
        s=s*10+c;
        n=n/10;
       }
if(s==t)
       printf("palandrome num");
else
       printf("not palandrome num");
return 0;
}
