#include<stdio.h>
int main()
{int a[10],i,l=0,b=0;
printf("enter");
for(i=0;i<10;i++)
 scanf("%d",&a[i]);
for(i=0;i<10;i++)
 {if(a[i]%2==0)
  l++;
  else
   b++;
  }
  printf("odd=%d even=%d",l,b);
return 0;
}
