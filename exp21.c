#include<stdio.h>
int main()
{int a[10],i,n,temp;
printf("enter array size");
scanf("%d",&n);
for(i=0;i<n;i++)
 scanf("%d",&a[i]);
temp=a[n-1];
for(i=n-1;i>0;i--)
       a[i]=a[i-1];
a[0]=temp;
printf("new arrey\n");
for(i=0;i<n;i++)
 printf("%d\t",a[i]);
return 0;
}
