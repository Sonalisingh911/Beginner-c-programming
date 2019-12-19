#include<stdio.h>
int main()
{int a[10],i,neg=0;
printf("enter");
for(i=0;i<10;i++)
 scanf("%d",&a[i]);
for(i=0;i<10;i++)
 {if(a[i]<0)
  printf("%d\n",a[i]);
  }
return 0;
}
