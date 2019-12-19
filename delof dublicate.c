#include<stdio.h>
int main()
{int a[10],i,j,k,n;
printf("enter  size");
scanf("%d",&n);
printf("entr array ele");
for(i=0;i<n;i++)              /*galat h check kr leo */
    scanf("%d",&a[i]);
printf("new array");
for(i=0;i<n;)
{for(j=i+1;j<n;j++)
   {if(a[j]=a[i])
      {
      for(k=j+1;k<n;k++)
      a[k]=a[k+1];
      n--;
      }
    else
        j=--;
    }
  }
for(i=0;i<n;k++)
       printf("%d\n",a[i]);
    return 0;
    }
