#include<stdio.h>
int main()
{
int a[5]={2,4,5,6,7};
int i;
for(i=0;i<5;i++)
 {
 printf("\naddress=%u address%u",(a+i),(i+a));
 printf("\n value=%d value=%d",*(a+i),*(i+a));
 printf("\n value=%d value =%d",a[i],i[a]);
 printf("\n");
 }
 return 0;
 }
