#include<stdio.h>
int main()
{int s=0,c,n;
printf("enter num");
scanf("%d",&n);
for(c=2;c<=n/2;c++)
      {if(n%c==0)
         s=s+1;}
if(s==0)
       printf("prime num");
else
       printf("not prime num");
return 0;

}
