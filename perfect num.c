#include<stdio.h>
int main()
{int n,c,s=0;
printf("enter num");
scanf("%d",&n);
for(c=1;c<=n/2;c++)
{
       if(n%c==0)
              s=s+c;

}
if(s==n)
       printf("perfect num");
else
       printf("not perfect num");
return 0;}
