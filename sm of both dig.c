#include<stdio.h>
#define MAX 10
int main()
{int a[MAX][MAX],i,j,n,sm;
printf("enter aray size");
scanf("%d",&n);
printf("enter array element");
for(i=0;i<n;i++)
{ for(j=0;j<n;j++)
     scanf("%d",&a[i][j]);
}
for(i=0;i<n;i++)
{ for(j=0;j<n;j++)
     if(((i+j)==n-1)||(i==j))
        sm=sm+a[i][j];
}
printf("sm of both dign %d",sm);
return 0;
}
