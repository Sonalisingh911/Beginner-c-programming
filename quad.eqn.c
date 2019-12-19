#include<math.h>
#include<stdio.h>
int main()
{int a,b,c;
float r1,r2,rp,imp,d;
printf("quad eqn.of form a,b & c");
scanf("%d%d%d",&a,&b,&c);
d=pow(b,2)-(4*a*c);
if(d>0)
{r1=(-b+sqrt(d))/(2*a);
 r2=(-b-sqrt(d))/(2*a);
 printf("%f & %f are roots",r1,r2);}
else if(d==0)
  {r1=r2=-b/(2*a);
  printf("%f is root",r1);}
else if(d<0)
  {rp=-b/(2*a);
   imp=sqrt(-d);
   printf("roots are %f+%f i & %f-%f i",rp,imp,rp,imp);}
return 0;
}
