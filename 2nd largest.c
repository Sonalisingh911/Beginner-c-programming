#include<stdio.h>
#include<limits.h>
int main()
{int a[10],i,n,max1,max2;
printf("size of aray");
scanf("%d",&n);
printf("enter elements");
for(i=0;i<n;i++)
       scanf("%d",&a[i]);
max1=max2=INT_MIN;
for(i=0;i<n;i++)
{if(a[i]>max1)
{max2=max1;
 max1=a[i];}
 else if(max2<a[i] && a[i]<max1)
     max2=a[i];
}
printf("new arry");
for(i=0;i<n;i++)
  printf("%d",a[i]);
return 0;
}
