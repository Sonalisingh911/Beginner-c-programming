#include<stdio.h>
#define MAX 10
int main()
{int a[MAX][MAX],i,j,n,b[MAX][MAX],c[MAX][MAX];
printf("enter aray size");
scanf("%d",&n);
printf("enter array  OF A element");
for(i=0;i<n;i++)
{ for(j=0;j<n;j++)
     scanf("%d",&a[i][j]);
}
printf("enter array  OF B element");
for(i=0;i<n;i++)
{ for(j=0;j<n;j++)
     scanf("%d",&b[i][j]);
}
for(i=0;i<n;i++)
{ for(j=0;j<n;j++)
     c[i][j]=b[i][j]+a[i][j];

}
for(i=0;i<3;i++)
 { for(j=0;j<3;j++)
      printf("%d\t",c[i][j]);
   printf("\n");
}
return 0;
}
