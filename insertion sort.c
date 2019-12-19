#include<stdio.h>
int main()
{int a[10],n,i,j,temp;
printf("size of aray");
scanf("%d",&n);
printf("enter elements");
for(i=0;i<n;i++)
       scanf("%d",&a[i]);
for(i=1;i<n;i++)
  { j=i-1;
    temp=a[i];
    while(temp<a[j] & j>=0)
       { a[j+1]=a[j];
        j=j-1;
       }
    a[j+1]=temp;
  }
for(i=0;i<n;i++)
  printf("%d",a[i]);
  return 0;
  }

