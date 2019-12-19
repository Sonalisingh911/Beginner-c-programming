#include<stdio.h>
int main()
{int a[10],n,i,lw,hi,mid,item;
printf("size of aray");
scanf("%d",&n);
printf("enter elements:must be in shorted oder");
for(i=0;i<n;i++)
       scanf("%d",&a[i]);
printf("ele to  srch");
scanf("%d",&item);
lw=0,hi=n-1;
while(lw<=hi)
{
mid=(lw+hi)/2;
if(item==a[mid])
       {printf("found at pos %d",mid+1);
       break;
       }
else if(item<mid)
       hi=mid-1;
else
       lw=mid+1;
}
return 0;
}
