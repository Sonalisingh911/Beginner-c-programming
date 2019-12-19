#include<stdio.h>
#define MAX 10
int main()
{int a[MAX][MAX],i,j,r1,c1,r2,c2,sm,k,b[MAX][MAX],c[MAX][MAX];
printf("enter aray A row & col");
scanf("%d%d",&r1,&c1);
printf("enter array  OF A element");
for(i=0;i<r1;i++)
{ for(j=0;j<c1;j++)
     scanf("%d",&a[i][j]);
}
printf("enter aray B row & col");
scanf("%d%d",&r2,&c2);
printf("enter array  OF B element");
for(i=0;i<r2;i++)
{ for(j=0;j<c2;j++)
     scanf("%d",&b[i][j]);
}
if(r1==c2)
{
for(i=0;i<r1;i++)
{ for(j=0;j<c1;j++)
  { sm=0;
    for(k=0;k<c1;k++)
         sm=sm+a[i][j]*b[j][i];
   }
     c[i][j]=sm;
}
for(i=0;i<r1;i++)
 { for(j=0;j<c2;j++)
      printf("%d\t",c[i][j]);
   printf("\n");
}
}
return 0;
}
