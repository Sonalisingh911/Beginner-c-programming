#include<stdio.h>
int main()
{int sp,cp,l,p;
printf("enter sp and cp");
scanf("%d%d",&sp,&cp);
if(sp>cp)
{p=sp-cp;
 printf("profit=%d",p);}
else if(cp>sp)
 {l=cp-sp;
 printf("loss=%d",l);}
else
 printf("no profit no loss");
return 0;
}
