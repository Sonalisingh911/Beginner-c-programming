#include<stdio.h>
int main()
{int a[5],i,sm=0;
printf("enter");
for(i=0;i<5;i++)
 scanf("%d",&a[i]);
for(i=0;i<5;i++)
       sm=sm+a[i];
   printf("%d\n",sm);
return 0;
}
