/* Two enter two angels  of atriangle and find third angle.*/
#include<stdio.h>
int main()
{ int a,b,c;
printf("enter 2 sides of triangle");
scanf("%d%d",&a,&b);
c=180-(a+b);
printf("third side=%d",c);
return 0;
}
