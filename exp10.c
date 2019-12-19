#include<stdio.h>
int main()
{int a[10],i,n,j,pos;
printf("enter size of arry");
scanf("%d",&n);
printf("enter arry");
for(i=0;i<n;i++)
   scanf("%d",&a[i]);
printf("enter position");
scanf("%d",&pos);
for(i=pos;i<=n-1;i++)
  a[i-1]=a[i];
n=n-1;
printf("after del");
for(i=0;i<n;i++)
 printf("%d",a[i]);
return 0;
}
