#include<stdio.h>
int main()
{int a[10],i,flag=0,item,pos,n;
printf("enter array num & arry");
scanf("%d",&n);
for(i=0;i<n;i++)
 a[i+1]=a[i];
a[i+1]=item;
n=n+1;
printf("new arry");
for(i=0;i<n;i++)
  printf("%d",a[i]);
return 0;
}
